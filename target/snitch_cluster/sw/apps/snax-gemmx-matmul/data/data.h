#include <stdint.h>

int Batch = 1;

int M = 1;

int K = 18;

int N = 2;

int32_t Aslstride0 = 1;

int32_t Aslstride1 = 8.0;

int32_t Atlbound0 = 18;

int32_t Atlstride0 = 64.0;

int32_t Atlbound1 = 2;

int32_t Atlstride1 = 0;

int32_t Atlbound2 = 1;

int32_t Atlstride2 = 1152.0;

int32_t Atlbound3 = 1;

int32_t Atlstride3 = 0;

int32_t Atlbound4 = 1;

int32_t Atlstride4 = 0;

int32_t Atlbound5 = 1;

int32_t Atlstride5 = 0;

int32_t Bslstride0 = 1;

int32_t Bslstride1 = 8.0;

int32_t Btlbound0 = 18;

int32_t Btlstride0 = 64.0;

int32_t Btlbound1 = 2;

int32_t Btlstride1 = 1152.0;

int32_t Btlbound2 = 1;

int32_t Btlstride2 = 0;

int32_t Cslstride0 = 8.0;

int32_t Cslstride1 = 64.0;

int32_t Ctlbound0 = 2;

int32_t Ctlstride0 = 256.0;

int32_t Ctlbound1 = 1;

int32_t Ctlstride1 = 512.0;

int32_t Ctlbound2 = 1;

int32_t Ctlstride2 = 0;

int32_t D32slstride0 = 8.0;

int32_t D32slstride1 = 64.0;

int32_t D32tlbound0 = 2;

int32_t D32tlstride0 = 256.0;

int32_t D32tlbound1 = 1;

int32_t D32tlstride1 = 512.0;

int32_t D32tlbound2 = 1;

int32_t D32tlstride2 = 0;

int32_t D8slstride0 = 1;

int32_t D8slstride1 = 8.0;

int32_t D8tlbound0 = 2;

int32_t D8tlstride0 = 64.0;

int32_t D8tlbound1 = 1;

int32_t D8tlstride1 = 128.0;

int32_t D8tlbound2 = 1;

int32_t D8tlstride2 = 0;

int32_t delta_local_a = 0;

int32_t delta_local_b = 1152.0;

int32_t delta_local_c = 3456.0;

int32_t delta_local_d32 = 3968.0;

int32_t delta_local_d8 = 3968.0;

int8_t subtraction_a = -26;

int8_t subtraction_b = 51;

int8_t A[1152]  = {
	-36,
	-114,
	-22,
	-57,
	60,
	-108,
	-26,
	-7,
	82,
	86,
	-54,
	74,
	-41,
	-12,
	-29,
	-25,
	23,
	2,
	21,
	-76,
	-127,
	-41,
	107,
	29,
	-91,
	1,
	63,
	59,
	-108,
	32,
	75,
	-71,
	-107,
	124,
	107,
	-40,
	-80,
	90,
	-70,
	126,
	41,
	91,
	59,
	79,
	-114,
	61,
	61,
	46,
	61,
	-78,
	-21,
	-74,
	115,
	-65,
	120,
	2,
	100,
	-78,
	6,
	-108,
	-56,
	38,
	-111,
	3,
	-40,
	-69,
	-115,
	113,
	121,
	-120,
	-39,
	-76,
	1,
	-45,
	-37,
	-18,
	59,
	70,
	43,
	124,
	-121,
	46,
	-94,
	77,
	-48,
	35,
	-79,
	-25,
	3,
	-127,
	125,
	5,
	-75,
	-23,
	-125,
	-75,
	92,
	62,
	17,
	89,
	-85,
	33,
	73,
	61,
	99,
	-115,
	-34,
	-81,
	-114,
	71,
	77,
	86,
	123,
	120,
	61,
	-89,
	84,
	79,
	108,
	-47,
	-18,
	-76,
	-105,
	25,
	88,
	123,
	59,
	-5,
	108,
	-88,
	28,
	-114,
	-84,
	-64,
	-40,
	-58,
	-120,
	-41,
	0,
	107,
	7,
	87,
	-66,
	10,
	114,
	-48,
	7,
	34,
	34,
	-96,
	-6,
	-124,
	105,
	102,
	121,
	-88,
	-101,
	6,
	72,
	-57,
	-117,
	33,
	-96,
	-81,
	118,
	22,
	-67,
	87,
	-92,
	-30,
	43,
	-25,
	85,
	90,
	-94,
	64,
	98,
	-28,
	46,
	77,
	2,
	-128,
	-124,
	89,
	118,
	126,
	13,
	-26,
	-102,
	8,
	78,
	-114,
	-39,
	-87,
	-5,
	76,
	50,
	-66,
	-33,
	102,
	112,
	-77,
	124,
	-33,
	3,
	93,
	100,
	22,
	102,
	108,
	14,
	42,
	-100,
	-93,
	-116,
	31,
	-58,
	58,
	114,
	-43,
	-101,
	-63,
	41,
	-84,
	-67,
	56,
	116,
	5,
	-101,
	-101,
	-21,
	-85,
	-45,
	-99,
	61,
	-54,
	-1,
	121,
	118,
	-37,
	88,
	102,
	61,
	96,
	0,
	-8,
	-102,
	61,
	-8,
	-13,
	76,
	104,
	-126,
	-26,
	69,
	71,
	26,
	8,
	-67,
	36,
	96,
	-78,
	105,
	43,
	23,
	78,
	-70,
	-11,
	31,
	-33,
	87,
	104,
	51,
	-16,
	-67,
	112,
	57,
	-77,
	-117,
	125,
	-90,
	1,
	2,
	-16,
	-28,
	-16,
	55,
	-48,
	58,
	-16,
	-127,
	1,
	91,
	-75,
	-42,
	100,
	95,
	96,
	0,
	18,
	-3,
	1,
	-76,
	43,
	89,
	31,
	69,
	31,
	118,
	-61,
	54,
	74,
	55,
	-6,
	16,
	126,
	-91,
	-105,
	-60,
	-13,
	-31,
	69,
	85,
	10,
	126,
	111,
	15,
	-32,
	72,
	-5,
	58,
	-59,
	79,
	-36,
	-126,
	19,
	123,
	58,
	35,
	18,
	-39,
	66,
	126,
	18,
	19,
	-33,
	70,
	-77,
	104,
	32,
	39,
	-1,
	-90,
	-47,
	-25,
	0,
	-118,
	91,
	56,
	88,
	49,
	22,
	30,
	93,
	-87,
	-30,
	-122,
	123,
	15,
	-39,
	-17,
	120,
	115,
	-69,
	-16,
	-127,
	0,
	-81,
	125,
	11,
	68,
	-92,
	31,
	122,
	118,
	-120,
	104,
	-30,
	18,
	-81,
	79,
	2,
	19,
	23,
	-75,
	-9,
	32,
	23,
	-13,
	-54,
	-16,
	71,
	35,
	37,
	-25,
	-45,
	125,
	98,
	-17,
	125,
	88,
	-30,
	24,
	-36,
	17,
	-1,
	-19,
	-47,
	65,
	-75,
	34,
	79,
	60,
	40,
	99,
	32,
	-61,
	-96,
	13,
	-108,
	-81,
	19,
	119,
	-1,
	7,
	6,
	66,
	16,
	-1,
	-96,
	47,
	75,
	58,
	-14,
	85,
	-10,
	-107,
	109,
	29,
	-91,
	101,
	-20,
	-78,
	53,
	-121,
	-102,
	-102,
	97,
	-108,
	-99,
	-32,
	-101,
	-18,
	63,
	96,
	68,
	123,
	-68,
	-81,
	18,
	-125,
	-94,
	63,
	-80,
	-112,
	43,
	91,
	29,
	92,
	-83,
	-12,
	-123,
	-30,
	-5,
	104,
	-92,
	-105,
	-36,
	112,
	-83,
	52,
	-34,
	-30,
	59,
	96,
	-13,
	62,
	124,
	84,
	31,
	86,
	32,
	-62,
	-1,
	-111,
	-104,
	105,
	94,
	-75,
	-71,
	-62,
	-25,
	45,
	-105,
	-15,
	-97,
	46,
	-43,
	22,
	65,
	-2,
	26,
	105,
	1,
	89,
	-112,
	-25,
	32,
	8,
	-86,
	117,
	47,
	-90,
	92,
	41,
	118,
	-103,
	-30,
	-79,
	24,
	23,
	-116,
	-69,
	121,
	6,
	-72,
	-93,
	44,
	-109,
	-64,
	-121,
	109,
	15,
	13,
	75,
	-14,
	86,
	14,
	-37,
	-31,
	-63,
	-97,
	86,
	62,
	-43,
	-78,
	24,
	57,
	-66,
	61,
	-4,
	21,
	-71,
	-71,
	-43,
	-80,
	51,
	41,
	-59,
	-114,
	-75,
	106,
	59,
	-28,
	96,
	-121,
	-76,
	-69,
	107,
	-21,
	-124,
	-26,
	67,
	-123,
	-20,
	95,
	-13,
	-35,
	-82,
	-30,
	-74,
	39,
	-77,
	15,
	-116,
	-15,
	-5,
	-23,
	29,
	18,
	16,
	-9,
	-66,
	-110,
	-37,
	-71,
	54,
	-39,
	100,
	89,
	-12,
	-67,
	-106,
	-2,
	8,
	11,
	116,
	0,
	-71,
	-7,
	-128,
	110,
	-95,
	-33,
	-3,
	-11,
	-81,
	-40,
	103,
	108,
	-12,
	0,
	-113,
	60,
	102,
	63,
	62,
	-60,
	-107,
	-36,
	118,
	66,
	-53,
	25,
	15,
	50,
	100,
	-43,
	56,
	-100,
	77,
	91,
	-60,
	-82,
	112,
	-35,
	109,
	61,
	115,
	68,
	75,
	15,
	89,
	89,
	47,
	-44,
	-90,
	-29,
	-96,
	125,
	93,
	-28,
	-106,
	121,
	-119,
	117,
	-60,
	-29,
	-95,
	51,
	94,
	9,
	121,
	18,
	57,
	-33,
	-128,
	119,
	-60,
	108,
	-125,
	-113,
	-105,
	-49,
	118,
	-127,
	112,
	91,
	-1,
	31,
	90,
	-45,
	23,
	11,
	49,
	34,
	-5,
	-96,
	32,
	60,
	50,
	42,
	-28,
	-117,
	-62,
	-64,
	32,
	39,
	-55,
	-86,
	-85,
	-100,
	12,
	-117,
	-34,
	-83,
	1,
	124,
	114,
	113,
	-94,
	86,
	-48,
	-39,
	-121,
	-36,
	25,
	73,
	-39,
	125,
	33,
	-14,
	-24,
	6,
	67,
	-71,
	116,
	-15,
	108,
	-54,
	28,
	-9,
	35,
	88,
	-108,
	124,
	120,
	35,
	9,
	-28,
	72,
	23,
	63,
	98,
	48,
	-30,
	111,
	-93,
	81,
	112,
	102,
	-33,
	23,
	22,
	61,
	95,
	-92,
	-117,
	-16,
	54,
	-116,
	-106,
	88,
	-30,
	-24,
	-99,
	-112,
	-16,
	-67,
	-45,
	-17,
	88,
	-43,
	12,
	58,
	-110,
	48,
	-29,
	11,
	60,
	104,
	18,
	-53,
	-120,
	70,
	-101,
	77,
	94,
	-1,
	-77,
	-46,
	121,
	-18,
	15,
	-12,
	-60,
	-30,
	11,
	-104,
	51,
	-6,
	84,
	99,
	-76,
	22,
	15,
	-72,
	-90,
	-20,
	52,
	-87,
	57,
	38,
	13,
	94,
	-7,
	4,
	34,
	86,
	92,
	106,
	-54,
	17,
	110,
	-53,
	-120,
	-55,
	57,
	107,
	16,
	124,
	101,
	-122,
	45,
	12,
	39,
	41,
	8,
	49,
	-102,
	-7,
	65,
	-124,
	-100,
	36,
	37,
	-46,
	7,
	111,
	-20,
	-64,
	-43,
	115,
	16,
	126,
	-58,
	88,
	-84,
	3,
	-93,
	-59,
	123,
	30,
	-110,
	60,
	-21,
	53,
	38,
	-38,
	73,
	-39,
	-110,
	-90,
	-3,
	66,
	44,
	12,
	113,
	91,
	-3,
	-71,
	19,
	91,
	71,
	-68,
	-2,
	-24,
	38,
	-128,
	2,
	76,
	-37,
	61,
	120,
	62,
	123,
	-16,
	24,
	-73,
	32,
	37,
	-12,
	5,
	-71,
	-85,
	44,
	31,
	44,
	-68,
	-82,
	20,
	-49,
	-11,
	84,
	74,
	123,
	100,
	35,
	98,
	18,
	-109,
	56,
	17,
	-82,
	104,
	-80,
	-115,
	14,
	30,
	-128,
	-12,
	-75,
	-11,
	-126,
	15,
	86,
	56,
	74,
	-117,
	-55,
	95,
	-113,
	71,
	-27,
	75,
	23,
	27,
	-12,
	-121,
	-7,
	-37,
	35,
	-39,
	7,
	57,
	-69,
	49,
	-101,
	91,
	-28,
	-88,
	99,
	63,
	26,
	117,
	62,
	16,
	72,
	32,
	116,
	83,
	76,
	91,
	111,
	28,
	12,
	-83,
	-94,
	124,
	5,
	-47,
	-14,
	68,
	-82,
	24,
	65,
	-119,
	-73,
	-99,
	113,
	122,
	-20,
	-124,
	-10,
	119,
	-96,
	-11,
	-64,
	17,
	95,
	110,
	48,
	-118,
	-44,
	-103,
	-66,
	88,
	-43,
	-70,
	-102,
	48,
	76,
	32,
	-31,
	-24,
	-30,
	126,
	0,
	20,
	111,
	-74,
	-123,
	91,
	80,
	68,
	-34,
	4,
	-27,
	-126,
	52,
	-106,
	100,
	-76,
	36,
	73,
	73,
	-46,
	16,
	-44,
	-51,
	72,
	-19,
	-128,
	-78,
	44,
	76,
	-125,
	61,
	64,
	-16,
	103,
	-97,
	-95,
	-37,
	-34,
	-57,
	-90,
	25,
	121,
	33,
	53,
	-11,
	-126,
	-6,
	-79,
	-117,
	64,
	-75,
	107,
	4,
	93,
	93,
	122,
	-72,
	16,
	-17,
	126,
	-82,
	22,
	78,
	100,
	-44,
	13,
	-63,
	-54,
	50,
	-26,
	37,
	63,
	123,
	97,
	-91,
	-79,
	-31,
	-47,
	-99,
	-50,
	-38,
	50,
	62,
	97,
	-77,
	120,
	37,
	96,
	87,
	-50,
	123,
	-99,
	118,
	-23,
	-78,
	-48,
	4,
	-100,
	3,
	9,
	55,
	16,
	-55,
	-112,
	123,
};

int8_t B[2304]  = {
	-45,
	87,
	-60,
	-95,
	-123,
	-76,
	65,
	76,
	-3,
	106,
	-86,
	111,
	74,
	-14,
	-18,
	120,
	22,
	54,
	-49,
	-34,
	74,
	-11,
	15,
	-121,
	3,
	-25,
	3,
	55,
	-104,
	66,
	-33,
	66,
	26,
	-36,
	31,
	49,
	-68,
	-7,
	-78,
	18,
	-108,
	-124,
	81,
	-37,
	41,
	-68,
	-107,
	20,
	-59,
	-128,
	4,
	104,
	-117,
	-39,
	-83,
	-95,
	48,
	-51,
	89,
	-84,
	26,
	-56,
	-103,
	120,
	-82,
	-8,
	85,
	110,
	-73,
	-35,
	-22,
	-66,
	-81,
	-68,
	-48,
	-103,
	-93,
	-128,
	-121,
	-16,
	-30,
	124,
	51,
	78,
	-82,
	-2,
	-73,
	85,
	-115,
	89,
	-101,
	86,
	-51,
	87,
	1,
	-20,
	25,
	-115,
	58,
	-73,
	-14,
	-122,
	-126,
	-18,
	22,
	109,
	-22,
	110,
	123,
	108,
	-111,
	121,
	-91,
	98,
	-14,
	-114,
	63,
	88,
	-10,
	100,
	-101,
	73,
	-90,
	56,
	-112,
	102,
	-43,
	89,
	-3,
	-85,
	-104,
	16,
	-116,
	83,
	-104,
	-61,
	9,
	-62,
	104,
	-20,
	17,
	-18,
	99,
	-18,
	85,
	-95,
	-18,
	-121,
	39,
	-16,
	107,
	-46,
	-87,
	40,
	-28,
	-123,
	51,
	-103,
	-65,
	97,
	58,
	55,
	-70,
	-20,
	69,
	100,
	-8,
	-96,
	52,
	21,
	-108,
	69,
	-59,
	118,
	-17,
	-125,
	-35,
	-54,
	61,
	-67,
	-35,
	-34,
	23,
	-74,
	8,
	118,
	2,
	114,
	-98,
	-89,
	100,
	-93,
	23,
	94,
	-123,
	-63,
	83,
	91,
	-54,
	-125,
	-50,
	5,
	-11,
	-16,
	-35,
	119,
	101,
	50,
	-67,
	56,
	65,
	-50,
	74,
	7,
	-103,
	50,
	44,
	-85,
	4,
	-59,
	25,
	-11,
	-61,
	-110,
	83,
	96,
	-109,
	-16,
	11,
	-82,
	-128,
	-39,
	13,
	-65,
	-91,
	-92,
	-3,
	10,
	126,
	-29,
	-52,
	106,
	-126,
	32,
	5,
	49,
	119,
	-119,
	-124,
	22,
	9,
	43,
	1,
	-116,
	39,
	1,
	-45,
	-64,
	-66,
	-28,
	-56,
	-112,
	-120,
	74,
	14,
	23,
	-91,
	118,
	34,
	-35,
	-34,
	-80,
	-60,
	-67,
	59,
	107,
	49,
	-51,
	-12,
	-9,
	74,
	8,
	33,
	-53,
	98,
	-94,
	-128,
	-89,
	-65,
	21,
	-69,
	-65,
	-36,
	-57,
	-118,
	-24,
	100,
	-115,
	-69,
	-99,
	-94,
	84,
	36,
	-124,
	-46,
	-6,
	-51,
	25,
	-67,
	3,
	-40,
	108,
	-87,
	-40,
	17,
	-89,
	-57,
	-90,
	-25,
	-115,
	-97,
	50,
	-4,
	37,
	-32,
	-106,
	-66,
	14,
	96,
	24,
	16,
	96,
	110,
	118,
	65,
	77,
	-76,
	-25,
	-25,
	50,
	-90,
	50,
	69,
	5,
	-62,
	6,
	50,
	71,
	-87,
	63,
	115,
	-114,
	-18,
	28,
	-96,
	115,
	93,
	102,
	26,
	35,
	28,
	-91,
	56,
	-32,
	124,
	100,
	26,
	54,
	-96,
	125,
	67,
	-43,
	-63,
	-119,
	-124,
	-6,
	-55,
	-32,
	-11,
	-91,
	12,
	30,
	-82,
	99,
	-20,
	87,
	51,
	55,
	-114,
	28,
	7,
	-124,
	28,
	-82,
	-61,
	-53,
	44,
	1,
	26,
	-34,
	-14,
	114,
	35,
	-93,
	-103,
	-86,
	-102,
	-60,
	19,
	-118,
	125,
	-55,
	-25,
	-91,
	5,
	71,
	-106,
	-82,
	-39,
	-83,
	-22,
	11,
	89,
	12,
	-25,
	61,
	81,
	88,
	96,
	-18,
	-25,
	-69,
	42,
	75,
	107,
	-29,
	111,
	-61,
	4,
	-9,
	-92,
	-57,
	-2,
	-23,
	112,
	-37,
	-98,
	-7,
	8,
	117,
	-78,
	-100,
	77,
	-89,
	-88,
	85,
	-118,
	22,
	-128,
	-83,
	-28,
	20,
	-39,
	-19,
	35,
	53,
	86,
	-72,
	-128,
	-66,
	53,
	-74,
	-14,
	39,
	14,
	20,
	46,
	72,
	-76,
	8,
	73,
	51,
	-72,
	-12,
	25,
	40,
	-94,
	-66,
	115,
	-104,
	-39,
	-54,
	-91,
	1,
	6,
	81,
	90,
	33,
	-38,
	-112,
	-1,
	42,
	58,
	-21,
	122,
	50,
	53,
	23,
	-104,
	70,
	51,
	69,
	116,
	-41,
	32,
	48,
	-100,
	-66,
	106,
	21,
	25,
	27,
	-15,
	84,
	-80,
	70,
	-48,
	-45,
	-24,
	48,
	19,
	-11,
	-43,
	91,
	-66,
	60,
	-25,
	-80,
	-58,
	-128,
	95,
	12,
	93,
	86,
	50,
	-6,
	55,
	82,
	-67,
	-97,
	29,
	-100,
	-80,
	44,
	92,
	-99,
	15,
	39,
	-110,
	-111,
	-128,
	-51,
	-14,
	46,
	113,
	65,
	117,
	91,
	-16,
	-15,
	93,
	37,
	50,
	-66,
	3,
	0,
	-121,
	28,
	-74,
	-26,
	2,
	-97,
	-119,
	73,
	82,
	-19,
	33,
	-5,
	96,
	-42,
	-74,
	91,
	-97,
	49,
	6,
	-36,
	-121,
	-64,
	-72,
	118,
	-62,
	87,
	86,
	58,
	126,
	124,
	-57,
	-75,
	120,
	110,
	100,
	-62,
	-78,
	-32,
	-37,
	110,
	-121,
	33,
	-94,
	-33,
	-41,
	-51,
	-97,
	-9,
	-83,
	106,
	15,
	67,
	115,
	36,
	53,
	84,
	13,
	94,
	-74,
	47,
	81,
	-122,
	-55,
	-122,
	32,
	22,
	-44,
	18,
	-17,
	-4,
	18,
	-93,
	-100,
	59,
	-47,
	-127,
	0,
	-82,
	68,
	19,
	-118,
	105,
	126,
	1,
	66,
	86,
	-10,
	11,
	-109,
	-124,
	-92,
	37,
	93,
	8,
	97,
	-76,
	43,
	-30,
	115,
	121,
	-43,
	-21,
	-105,
	-48,
	73,
	29,
	-9,
	-70,
	109,
	86,
	-1,
	95,
	80,
	-15,
	-14,
	80,
	-115,
	-120,
	-89,
	65,
	108,
	-104,
	-26,
	72,
	117,
	-107,
	106,
	109,
	-125,
	25,
	57,
	-100,
	-20,
	-31,
	86,
	-92,
	-54,
	-59,
	17,
	-1,
	-44,
	-87,
	-29,
	-88,
	37,
	-95,
	-112,
	36,
	24,
	101,
	-7,
	-53,
	-42,
	-12,
	-23,
	-43,
	84,
	-102,
	-72,
	-98,
	5,
	90,
	39,
	-31,
	-117,
	108,
	120,
	-76,
	70,
	9,
	44,
	16,
	25,
	84,
	91,
	61,
	-7,
	-83,
	-65,
	1,
	123,
	-75,
	-22,
	64,
	-78,
	52,
	-93,
	-14,
	-103,
	-100,
	20,
	-118,
	-89,
	-118,
	35,
	-16,
	58,
	-90,
	103,
	98,
	-75,
	-31,
	-74,
	-18,
	23,
	117,
	21,
	-60,
	-73,
	-96,
	121,
	-93,
	110,
	19,
	82,
	98,
	115,
	106,
	-48,
	61,
	122,
	-20,
	106,
	97,
	72,
	25,
	65,
	116,
	-56,
	72,
	-89,
	-112,
	0,
	88,
	-68,
	42,
	-25,
	-87,
	-104,
	-90,
	-94,
	2,
	113,
	100,
	-21,
	43,
	50,
	93,
	-27,
	-31,
	-117,
	-110,
	-28,
	-85,
	58,
	122,
	-80,
	60,
	-112,
	-55,
	-72,
	-74,
	112,
	-82,
	-117,
	-67,
	-49,
	87,
	-46,
	-121,
	94,
	20,
	-48,
	86,
	100,
	-11,
	79,
	69,
	71,
	-104,
	81,
	-40,
	-117,
	14,
	-70,
	25,
	104,
	-20,
	-103,
	-82,
	-97,
	-119,
	-113,
	70,
	16,
	22,
	-103,
	84,
	-43,
	121,
	6,
	-115,
	-50,
	-12,
	-122,
	8,
	-14,
	47,
	-57,
	113,
	-70,
	86,
	92,
	-47,
	94,
	93,
	-13,
	38,
	98,
	17,
	58,
	105,
	-26,
	-112,
	-115,
	30,
	23,
	98,
	-21,
	59,
	-84,
	-31,
	2,
	-92,
	42,
	39,
	89,
	54,
	86,
	-21,
	-90,
	-114,
	-9,
	112,
	-125,
	-36,
	85,
	24,
	12,
	81,
	32,
	-113,
	108,
	41,
	-21,
	-3,
	65,
	-74,
	98,
	41,
	-95,
	29,
	122,
	118,
	-116,
	12,
	-111,
	31,
	-33,
	98,
	-6,
	-90,
	-83,
	115,
	-100,
	61,
	112,
	92,
	-67,
	116,
	107,
	56,
	-113,
	55,
	107,
	110,
	-8,
	-119,
	29,
	24,
	126,
	-26,
	-45,
	4,
	-64,
	93,
	48,
	-126,
	44,
	13,
	-9,
	29,
	113,
	-61,
	17,
	61,
	-92,
	24,
	47,
	64,
	52,
	109,
	78,
	-56,
	14,
	-80,
	-8,
	-41,
	67,
	11,
	58,
	121,
	-92,
	-68,
	100,
	42,
	-5,
	69,
	-90,
	55,
	-66,
	-83,
	-41,
	-118,
	-67,
	-52,
	97,
	24,
	70,
	-77,
	-125,
	-70,
	-57,
	19,
	-36,
	-66,
	-75,
	-12,
	114,
	108,
	-19,
	-55,
	-22,
	97,
	-72,
	89,
	40,
	112,
	121,
	-126,
	-9,
	-123,
	-124,
	-124,
	-75,
	-82,
	86,
	48,
	-120,
	-30,
	-109,
	-7,
	112,
	-68,
	-6,
	105,
	34,
	49,
	-47,
	-67,
	16,
	87,
	-126,
	31,
	98,
	101,
	-116,
	-9,
	-4,
	110,
	-40,
	-56,
	-61,
	13,
	-28,
	-31,
	-118,
	-24,
	55,
	-62,
	-6,
	91,
	-100,
	8,
	66,
	24,
	97,
	-53,
	41,
	-120,
	78,
	-89,
	-104,
	-124,
	10,
	58,
	97,
	87,
	-5,
	78,
	-91,
	-57,
	122,
	4,
	47,
	-39,
	17,
	69,
	-92,
	-69,
	47,
	76,
	-101,
	68,
	76,
	-48,
	-15,
	-89,
	-84,
	95,
	-67,
	-36,
	-14,
	57,
	-62,
	-73,
	-89,
	-31,
	-89,
	-38,
	76,
	108,
	-96,
	-123,
	87,
	18,
	-49,
	39,
	-37,
	-32,
	-70,
	-70,
	-81,
	40,
	-116,
	-22,
	-84,
	-40,
	52,
	41,
	-29,
	62,
	26,
	37,
	59,
	-122,
	4,
	106,
	-84,
	-71,
	120,
	114,
	-98,
	-106,
	41,
	9,
	31,
	-22,
	52,
	29,
	-90,
	30,
	-47,
	-29,
	-127,
	77,
	-52,
	92,
	-117,
	-90,
	65,
	95,
	-116,
	-83,
	26,
	-16,
	104,
	-112,
	-25,
	94,
	-31,
	59,
	63,
	-41,
	-20,
	34,
	111,
	-59,
	82,
	29,
	70,
	-55,
	104,
	95,
	97,
	-66,
	27,
	-69,
	-50,
	93,
	-92,
	92,
	-107,
	67,
	19,
	-33,
	99,
	113,
	-61,
	90,
	63,
	-112,
	-117,
	21,
	16,
	9,
	-11,
	64,
	-107,
	89,
	-9,
	122,
	81,
	-79,
	-115,
	63,
	46,
	-100,
	75,
	35,
	122,
	98,
	51,
	-4,
	75,
	-122,
	-100,
	10,
	-96,
	5,
	-18,
	-50,
	31,
	50,
	74,
	-71,
	86,
	-103,
	97,
	45,
	97,
	-100,
	-125,
	80,
	-30,
	12,
	104,
	-90,
	-114,
	-10,
	-100,
	28,
	-54,
	-13,
	-97,
	1,
	46,
	77,
	-45,
	-107,
	74,
	-102,
	66,
	-48,
	-3,
	107,
	55,
	-37,
	92,
	-108,
	-82,
	79,
	-28,
	58,
	-45,
	-123,
	18,
	56,
	68,
	2,
	122,
	-128,
	-71,
	-5,
	37,
	-114,
	33,
	60,
	34,
	-65,
	112,
	-104,
	-105,
	-117,
	-111,
	-114,
	107,
	79,
	-102,
	-57,
	-69,
	45,
	88,
	16,
	-36,
	-76,
	-121,
	-50,
	-102,
	45,
	-79,
	115,
	70,
	2,
	-36,
	63,
	43,
	52,
	-105,
	-69,
	-7,
	2,
	19,
	-83,
	-114,
	24,
	93,
	77,
	70,
	-112,
	-3,
	107,
	-45,
	99,
	-120,
	37,
	47,
	120,
	59,
	-66,
	85,
	117,
	116,
	-12,
	1,
	-41,
	-57,
	10,
	-65,
	76,
	80,
	-57,
	-108,
	-111,
	93,
	-65,
	-47,
	-19,
	110,
	-34,
	37,
	-97,
	-118,
	-84,
	88,
	-96,
	123,
	-27,
	40,
	7,
	-118,
	85,
	50,
	-41,
	-88,
	16,
	-53,
	-8,
	-83,
	31,
	78,
	-49,
	-75,
	-43,
	-37,
	19,
	32,
	73,
	39,
	31,
	113,
	123,
	-32,
	-127,
	96,
	-96,
	104,
	76,
	29,
	32,
	-52,
	-13,
	25,
	21,
	-26,
	65,
	37,
	-26,
	-39,
	45,
	-7,
	113,
	14,
	97,
	-23,
	-10,
	43,
	-80,
	-25,
	74,
	-68,
	66,
	-6,
	5,
	-120,
	-123,
	-56,
	-26,
	94,
	31,
	-88,
	-15,
	75,
	-121,
	-57,
	49,
	-37,
	-67,
	-45,
	-67,
	-18,
	122,
	-2,
	-122,
	74,
	-45,
	79,
	3,
	5,
	-71,
	-107,
	25,
	-2,
	-126,
	-2,
	-88,
	59,
	-23,
	-115,
	74,
	81,
	117,
	-117,
	-42,
	-117,
	12,
	-104,
	-84,
	114,
	-7,
	18,
	-74,
	109,
	-29,
	44,
	7,
	92,
	-10,
	-76,
	54,
	-97,
	-78,
	-85,
	-47,
	69,
	17,
	82,
	21,
	-92,
	-33,
	-73,
	-24,
	-70,
	2,
	27,
	73,
	114,
	-94,
	60,
	-36,
	53,
	62,
	78,
	-32,
	6,
	-53,
	-80,
	-35,
	84,
	30,
	57,
	60,
	-105,
	19,
	-92,
	-125,
	91,
	-21,
	-3,
	-109,
	59,
	23,
	-79,
	48,
	50,
	-33,
	-24,
	35,
	121,
	-12,
	-31,
	99,
	-63,
	-50,
	33,
	35,
	-123,
	-90,
	41,
	114,
	-14,
	57,
	117,
	-4,
	-117,
	2,
	108,
	-111,
	-89,
	-108,
	14,
	96,
	-30,
	-103,
	-121,
	-29,
	111,
	93,
	-42,
	-87,
	43,
	-115,
	-51,
	-127,
	-10,
	-92,
	-60,
	37,
	108,
	-88,
	-67,
	117,
	-69,
	-4,
	-18,
	-115,
	119,
	102,
	88,
	-45,
	1,
	102,
	-59,
	16,
	-6,
	-40,
	120,
	-101,
	-63,
	34,
	100,
	-124,
	126,
	64,
	39,
	75,
	55,
	35,
	-84,
	22,
	-82,
	-98,
	10,
	-119,
	66,
	-11,
	-115,
	-49,
	73,
	-36,
	-119,
	-53,
	-35,
	-24,
	-128,
	4,
	-109,
	-121,
	42,
	75,
	-128,
	-72,
	-65,
	-11,
	83,
	-101,
	-8,
	-22,
	36,
	46,
	100,
	75,
	36,
	-80,
	112,
	-9,
	-85,
	-73,
	27,
	-18,
	78,
	5,
	-21,
	122,
	60,
	19,
	-15,
	-51,
	1,
	72,
	126,
	-92,
	-109,
	-103,
	-100,
	-128,
	-10,
	-94,
	69,
	100,
	116,
	-70,
	-60,
	32,
	112,
	50,
	77,
	-117,
	105,
	-109,
	52,
	113,
	87,
	122,
	-86,
	-3,
	97,
	88,
	-79,
	-100,
	56,
	-90,
	94,
	55,
	110,
	42,
	49,
	22,
	43,
	-91,
	-45,
	22,
	-1,
	-3,
	-84,
	-77,
	-49,
	49,
	105,
	-5,
	-10,
	-121,
	113,
	-44,
	0,
	118,
	-121,
	28,
	-33,
	-27,
	-124,
	110,
	-43,
	46,
	-95,
	64,
	-74,
	-10,
	89,
	42,
	73,
	29,
	-15,
	81,
	16,
	-103,
	7,
	-82,
	103,
	-16,
	-53,
	90,
	-57,
	-40,
	-83,
	67,
	-96,
	-128,
	18,
	-98,
	79,
	13,
	-76,
	-81,
	-60,
	-24,
	-39,
	61,
	91,
	65,
	113,
	63,
	69,
	-66,
	-56,
	32,
	40,
	-40,
	47,
	-116,
	-56,
	116,
	-52,
	30,
	104,
	74,
	-61,
	-31,
	-4,
	-27,
	109,
	3,
	-27,
	-110,
	69,
	97,
	-47,
	12,
	104,
	-106,
	-46,
	-20,
	-54,
	0,
	-41,
	125,
	-75,
	70,
	-40,
	84,
	14,
	-64,
	-53,
	121,
	70,
	14,
	20,
	18,
	-69,
	-36,
	88,
	32,
	-80,
	95,
	112,
	-94,
	43,
	-27,
	89,
	-118,
	-30,
	71,
	-19,
	77,
	-55,
	65,
	45,
	-120,
	-126,
	-44,
	-103,
	-57,
	-81,
	65,
	69,
	27,
	-12,
	92,
	25,
	24,
	-117,
	4,
	97,
	-81,
	-92,
	78,
	-85,
	99,
	-114,
	-86,
	47,
	-42,
	-59,
	-83,
	113,
	-21,
	-6,
	42,
	108,
	-108,
	22,
	-22,
	118,
	-49,
	-82,
	-12,
	-5,
	14,
	-104,
	-93,
	74,
	-78,
	-114,
	-61,
	-108,
	12,
	85,
	-110,
	-95,
	-51,
	-4,
	67,
	111,
	-12,
	-77,
	109,
	-102,
	28,
	110,
	27,
	-94,
	7,
	15,
	-23,
	35,
	29,
	17,
	-127,
	48,
	-52,
	3,
	-39,
	-40,
	-35,
	74,
	-122,
	-34,
	-21,
	-55,
	-90,
	12,
	30,
	-58,
	62,
	-73,
	112,
	41,
	60,
	-87,
	55,
	-93,
	-45,
	67,
	-11,
	-122,
	-75,
	0,
	43,
	-9,
	44,
	-23,
	-82,
	-6,
	12,
	-10,
	21,
	-11,
	-108,
	85,
	91,
	8,
	-103,
	-120,
	-114,
	-119,
	87,
	-7,
	-8,
	-4,
	41,
	-57,
	23,
	79,
	-80,
	25,
	-38,
	-92,
	-61,
	-79,
	23,
	-110,
	-29,
	-69,
	38,
	73,
	-40,
	17,
	18,
	35,
	73,
	96,
	54,
	113,
	-60,
	46,
	-80,
	98,
	-21,
	97,
	32,
	-10,
	20,
	80,
	21,
	47,
	-92,
	14,
	34,
	91,
	70,
	31,
	-118,
	9,
	72,
	-51,
	-52,
	124,
	56,
	125,
	24,
	-127,
	-65,
	-94,
	-122,
	-44,
	17,
	-62,
	-87,
	-11,
	-4,
	38,
	40,
	112,
	74,
	102,
	-105,
	59,
	-83,
	-110,
	-61,
	89,
	-27,
	-87,
	-97,
	38,
	-20,
	109,
	-93,
	103,
	100,
	-32,
	35,
	2,
	-56,
	7,
	-32,
	-6,
	-59,
	40,
	102,
	67,
	-116,
	-80,
	-69,
	1,
	59,
	-124,
	43,
	-102,
	31,
	20,
	-121,
	101,
	71,
	-79,
	-62,
	117,
	-85,
	-4,
	-71,
	-126,
	-43,
	-59,
	1,
	86,
	43,
	-127,
	-27,
	80,
	-94,
	-31,
	86,
	-99,
	-13,
	-121,
	21,
	-85,
	57,
	-93,
	68,
	-52,
	92,
	-98,
	-82,
	120,
	-74,
	79,
	-23,
	61,
	29,
	-8,
	-74,
	15,
	-117,
	16,
	15,
	11,
	7,
	83,
	-126,
	15,
	-99,
	108,
	-106,
	-37,
	-14,
	-25,
	-11,
	-124,
	83,
	-25,
	119,
	-21,
	-64,
	-8,
	-99,
	20,
	-45,
	69,
	21,
	81,
	71,
	102,
	-97,
	32,
	116,
	-113,
	75,
	-91,
	115,
	97,
	124,
	13,
	-93,
	96,
	22,
	-15,
	108,
	-63,
	-24,
	-44,
	-127,
	90,
	120,
	72,
	64,
	-54,
	-62,
	51,
	61,
	22,
	25,
	67,
	81,
	-74,
	-123,
	34,
	21,
	42,
	14,
	-43,
	-69,
	-28,
	115,
	105,
	-117,
	110,
	-80,
	-87,
	37,
	-47,
	44,
	-94,
	29,
	87,
	105,
	29,
	77,
	5,
	-62,
	-49,
	-122,
	51,
	-115,
	-56,
	14,
	20,
	34,
	-63,
	-38,
	1,
	34,
	81,
	77,
	-109,
	81,
	-119,
	-104,
	65,
	-104,
	124,
	-75,
	-96,
	35,
	-34,
	-115,
	-64,
	-19,
	-49,
	-75,
	109,
	-4,
	51,
	2,
	98,
	40,
	5,
	-104,
	12,
	-12,
	97,
	7,
	20,
	97,
	67,
	-104,
	-50,
	-61,
	44,
	59,
	-117,
	-97,
	-1,
	-33,
	-37,
	12,
	-98,
	-51,
	-109,
	17,
	92,
	-69,
	62,
	5,
	31,
	-36,
	-86,
	125,
	1,
	-69,
	22,
	82,
	-98,
	114,
	-124,
	82,
	33,
	-119,
	-40,
	1,
	-3,
	-118,
	49,
	124,
	30,
	-73,
	78,
	72,
	86,
	-46,
	8,
	-30,
	20,
	-56,
	27,
	61,
	109,
	-14,
	-122,
	-49,
	15,
	123,
	-32,
	-125,
	-125,
	-26,
	-89,
	-112,
	-28,
	-26,
	-5,
	-77,
	92,
	-77,
	35,
	-5,
	37,
	102,
};

int32_t channel_en_C = 255;

int32_t broadcast_C = 1;

int32_t C[128]  = {
	49,
	-66,
	100,
	-13,
	62,
	-67,
	124,
	98,
	49,
	-66,
	100,
	-13,
	62,
	-67,
	124,
	98,
	49,
	-66,
	100,
	-13,
	62,
	-67,
	124,
	98,
	49,
	-66,
	100,
	-13,
	62,
	-67,
	124,
	98,
	49,
	-66,
	100,
	-13,
	62,
	-67,
	124,
	98,
	49,
	-66,
	100,
	-13,
	62,
	-67,
	124,
	98,
	49,
	-66,
	100,
	-13,
	62,
	-67,
	124,
	98,
	49,
	-66,
	100,
	-13,
	62,
	-67,
	124,
	98,
	-122,
	26,
	-37,
	85,
	-115,
	70,
	100,
	124,
	-122,
	26,
	-37,
	85,
	-115,
	70,
	100,
	124,
	-122,
	26,
	-37,
	85,
	-115,
	70,
	100,
	124,
	-122,
	26,
	-37,
	85,
	-115,
	70,
	100,
	124,
	-122,
	26,
	-37,
	85,
	-115,
	70,
	100,
	124,
	-122,
	26,
	-37,
	85,
	-115,
	70,
	100,
	124,
	-122,
	26,
	-37,
	85,
	-115,
	70,
	100,
	124,
	-122,
	26,
	-37,
	85,
	-115,
	70,
	100,
	124,
};

int32_t transposed_A = 1;

int32_t transposed_B = 0;

int32_t D32[128]  = {
	-473779,
	-470609,
	-399621,
	-235153,
	-431726,
	-394736,
	-329991,
	-348828,
	-289400,
	-175297,
	-91718,
	-214094,
	-328287,
	-237143,
	-175768,
	-235809,
	-451371,
	-284223,
	-289233,
	-381562,
	-435172,
	-238299,
	-331749,
	-254703,
	-448740,
	-315376,
	-217247,
	-243276,
	-256094,
	-216033,
	-214022,
	-278328,
	-194094,
	-136670,
	-187928,
	-176699,
	-156064,
	-195344,
	-304126,
	-288247,
	-250667,
	-270477,
	-110123,
	-162765,
	-155502,
	41062,
	-149475,
	-138458,
	-129720,
	-153261,
	-216992,
	-157608,
	-242745,
	-141221,
	-121007,
	-209618,
	-287783,
	-221970,
	-271074,
	-156321,
	-274303,
	-172325,
	-268375,
	-217678,
	-300763,
	-250258,
	-297518,
	-480443,
	-307033,
	-417319,
	-309963,
	-337079,
	-116823,
	-191200,
	-101442,
	-293420,
	-177033,
	-205027,
	-199705,
	-92702,
	-236343,
	-215360,
	-295660,
	-442728,
	-264208,
	-287460,
	-287129,
	-324282,
	-216856,
	-64289,
	-236040,
	-222190,
	-139555,
	-306398,
	-282011,
	-203836,
	-247477,
	-243871,
	-302273,
	-172958,
	-198946,
	-230056,
	-305718,
	-275878,
	-66680,
	-18030,
	-51329,
	-272464,
	-136681,
	-120616,
	-199846,
	-114660,
	-216454,
	-255413,
	-145561,
	-240580,
	-235421,
	-144937,
	-221626,
	-100765,
	-250421,
	-140538,
	-230927,
	-298107,
	-313129,
	-385669,
	-272774,
	-269223,
};

int32_t bypassSIMD = 0;

int8_t input_zp_i = -43;

int8_t output_zp_i = 4;

int8_t max_int_i = 127;

int8_t min_int_i = -128;

int8_t double_round_i = 0;

int32_t shared_bitpacked_shift0 = 1023489597;

int32_t shared_bitpacked_shift1 = 624235546;

int32_t shared_multiplier0 = -1031594418;

int32_t shared_multiplier1 = 352823956;

int32_t shared_multiplier2 = 1117936265;

int32_t shared_multiplier3 = 777280982;

int32_t shared_multiplier4 = -1558601927;

int32_t shared_multiplier5 = -1332750473;

int32_t shared_multiplier6 = 151655846;

int32_t shared_multiplier7 = 510878596;

int8_t D8[128]  = {
	4,
	3,
	128,
	3,
	127,
	127,
	3,
	128,
	4,
	3,
	128,
	3,
	127,
	127,
	3,
	128,
	4,
	3,
	128,
	3,
	127,
	127,
	3,
	128,
	4,
	3,
	127,
	3,
	127,
	127,
	3,
	128,
	4,
	3,
	127,
	3,
	127,
	127,
	3,
	128,
	4,
	3,
	127,
	3,
	127,
	128,
	3,
	128,
	4,
	3,
	127,
	3,
	127,
	127,
	3,
	128,
	4,
	3,
	127,
	3,
	127,
	127,
	3,
	128,
	4,
	3,
	127,
	3,
	127,
	127,
	3,
	128,
	4,
	3,
	128,
	3,
	127,
	127,
	3,
	128,
	4,
	3,
	128,
	3,
	127,
	127,
	3,
	128,
	4,
	3,
	127,
	3,
	127,
	127,
	3,
	128,
	4,
	3,
	128,
	3,
	127,
	127,
	3,
	128,
	4,
	3,
	128,
	3,
	127,
	127,
	3,
	128,
	4,
	3,
	127,
	3,
	127,
	127,
	3,
	128,
	4,
	3,
	127,
	3,
	127,
	127,
	3,
	128,
};

int32_t set_addr_remap_index_A = 0;

int32_t set_addr_remap_index_B = 0;

int32_t set_addr_remap_index_C = 0;

int32_t set_addr_remap_index_D32 = 0;

int32_t set_addr_remap_index_D8 = 0;
