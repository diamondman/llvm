//===-- I8051MCTargetDesc.cpp - I8051 Target Descriptions -----------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//
//
// This file provides I8051 specific target descriptions.
//
//===----------------------------------------------------------------------===//

//#include "I8051MCTargetDesc.h"
//#include "I8051ELFStreamer.h"
//#include "I8051MCAsmInfo.h"
//#include "I8051TargetStreamer.h"
//#include "InstPrinter/I8051InstPrinter.h"

#include "llvm/MC/MCELFStreamer.h"
#include "llvm/MC/MCInstrInfo.h"
#include "llvm/MC/MCRegisterInfo.h"
#include "llvm/MC/MCSubtargetInfo.h"
#include "llvm/Support/TargetRegistry.h"

using namespace llvm;

extern "C" void LLVMInitializeI8051TargetMC() {}

