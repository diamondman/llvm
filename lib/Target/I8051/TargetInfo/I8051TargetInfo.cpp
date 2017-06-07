//===-- I8051TargetInfo.cpp - I8051 Target Implementation -----------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

#include "llvm/IR/Module.h"
#include "llvm/Support/TargetRegistry.h"
namespace llvm {
Target &getTheI8051Target() {
  static Target TheI8051Target;
  return TheI8051Target;
}
}

extern "C" void LLVMInitializeI8051TargetInfo() {
  llvm::RegisterTarget<llvm::Triple::i8051> X(llvm::getTheI8051Target(), "I8051",
                                            "Intel 8051 Microcontroller");
}
