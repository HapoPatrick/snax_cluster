package snax.streamer

import snax.readerWriter._
import snax.DataPathExtension._

import chisel3.util.log2Up
import chisel3.util.log2Ceil

/*
 *  This is the collection of all design Params
 *  Design Params is placed all together with companion object to avoid multiple definition of one config & config conflict
 */

// Streamer Module Params

class StreamerParam(
    // data mover params
    val readerParams: Seq[ReaderWriterParam],
    val writerParams: Seq[ReaderWriterParam],
    val readerWriterParams: Seq[ReaderWriterParam],

    // datapath extension params
    val readerDatapathExtention: Seq[Seq[HasDataPathExtension]] = Seq(Seq()),
    val writerDatapathExtention: Seq[Seq[HasDataPathExtension]] = Seq(Seq()),
    val readerWriterDatapathExtention: Seq[Seq[HasDataPathExtension]] = Seq(
      Seq()
    ),

    // cross clock domain params
    val hasCrossClockDomain: Boolean = false,

    // csr manager params
    val csrAddrWidth: Int,
    val tagName: String = "Test",
    val headerFilepath: String = "./generated/"
) {

  // reader, writer, reader-writer number inferred paramters
  val readerNum: Int = readerParams.length
  val writerNum: Int = writerParams.length
  val readerWriterNum: Int = readerWriterParams.length
  val dataMoverNum: Int =
    readerNum + writerNum + readerWriterNum

  // reader, writer, reader-writer tcdm ports inferred parameters
  val readerTcdmPorts: Seq[Int] = readerParams.map(_.aguParam.numChannel)
  val writerTcdmPorts: Seq[Int] = writerParams.map(_.aguParam.numChannel)
  // The tcdm ports for reader-writer, only the even index (reader's) is used
  // reader and writer share the same tcdm ports
  val readerWriterTcdmPorts: Seq[Int] =
    readerWriterParams
      .map(_.aguParam.numChannel)
      .zipWithIndex
      .filter { case (_, index) => index % 2 == 0 }
      .map(_._1)
  val tcdmPortsNum: Int =
    readerTcdmPorts.sum + writerTcdmPorts.sum + readerWriterTcdmPorts.sum

  // inffered parameters for tcdm
  val addrWidth = readerParams(0).tcdmParam.addrWidth
  val tcdmDataWidth = readerParams(0).tcdmParam.dataWidth

  // inffered parameters for data fifos
  val fifoWidthReader: Seq[Int] = readerParams.map(param =>
    param.aguParam.numChannel * param.tcdmParam.dataWidth
  )
  val fifoWidthWriter: Seq[Int] = writerParams.map(param =>
    param.aguParam.numChannel * param.tcdmParam.dataWidth
  )
  val fifoWidthReaderWriter: Seq[Int] = readerWriterParams.map(param =>
    param.aguParam.numChannel * param.tcdmParam.dataWidth
  )

  // design time spatial unrolling factors must match the channel number
  val totalReaderWriterParams =
    readerParams ++ writerParams ++ readerWriterParams
  totalReaderWriterParams.foreach { param =>
    require(
      param.aguParam.spatialBounds.reduce(_ * _) == param.aguParam.numChannel
    )
  }

}

object StreamerParam {
  def apply() = new StreamerParam(
    readerParams = Seq(
      new ReaderWriterParam(temporalDimension = 6),
      new ReaderWriterParam(temporalDimension = 3)
    ),
    writerParams = Seq(new ReaderWriterParam(temporalDimension = 3)),
    readerWriterParams = Seq(
      new ReaderWriterParam(
        temporalDimension = 3,
        numChannel = 32,
        spatialBounds = List(32)
      ),
      new ReaderWriterParam(
        temporalDimension = 3,
        numChannel = 32,
        spatialBounds = List(32)
      )
    ),
    csrAddrWidth = 32
  )
  def apply(
      readerParams: Seq[ReaderWriterParam],
      writerParams: Seq[ReaderWriterParam],
      readerWriterParams: Seq[ReaderWriterParam],
      readerDatapathExtention: Seq[Seq[HasDataPathExtension]],
      writerDatapathExtention: Seq[Seq[HasDataPathExtension]],
      readerWriterDatapathExtention: Seq[Seq[HasDataPathExtension]],
      hasCrossClockDomain: Boolean,
      csrAddrWidth: Int,
      tagName: String,
      headerFilepath: String
  ) = new StreamerParam(
    readerParams = readerParams,
    writerParams = writerParams,
    readerWriterParams = readerWriterParams,
    readerDatapathExtention = readerDatapathExtention,
    writerDatapathExtention = writerDatapathExtention,
    readerWriterDatapathExtention = readerWriterDatapathExtention,
    hasCrossClockDomain = hasCrossClockDomain,
    csrAddrWidth = csrAddrWidth,
    tagName = tagName,
    headerFilepath = headerFilepath
  )
}
