package snax.DataPathExtension

import chisel3._
import chisel3.util._
import snax.xdma.DesignParams._

class HasMemset extends HasDataPathExtension {
  implicit val extensionParam: DataPathExtensionParam =
    new DataPathExtensionParam(
      moduleName = "Memset",
      userCsrNum = 1,
      dataWidth = 512
    )
  def instantiate(clusterName: String): Memset = Module(new Memset {
    override def desiredName = clusterName + namePostfix
  })
}

class Memset()(implicit extensionParam: DataPathExtensionParam)
    extends DataPathExtension {
  val out = WireInit(
    VecInit(Seq.fill(extensionParam.dataWidth / 8)(ext_csr_i(0)(7, 0)))
  )
  ext_data_i.ready := ext_data_o.ready
  ext_data_o.valid := ext_data_i.valid
  ext_data_o.bits := out.asUInt
  ext_busy_o := false.B
}

object MemsetEmitter extends App {
  println(
    getVerilogString(
      new Memset()(
        new DataPathExtensionParam(
          moduleName = "Memset",
          userCsrNum = 1,
          dataWidth = 512
        )
      )
    )
  )
}
