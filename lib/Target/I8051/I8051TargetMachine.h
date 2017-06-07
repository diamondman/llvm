//===-- I8051TargetMachine.h - Define TargetMachine for I8051 ---*- C++ -*-===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//
//
// This file declares the I8051 specific subclass of TargetMachine.
//
//===----------------------------------------------------------------------===//

#ifndef LLVM_LIB_TARGET_I8051_I8051TARGETMACHINE_H
#define LLVM_LIB_TARGET_I8051_I8051TARGETMACHINE_H

#include "llvm/Target/TargetMachine.h"

namespace llvm {

class I8051TargetMachine : public LLVMTargetMachine {
public:
  I8051TargetMachine(const Target &T, const Triple &TT, StringRef CPU,
		     StringRef FS, const TargetOptions &Options,
		     Optional<Reloc::Model> RM, CodeModel::Model CM,
		     CodeGenOpt::Level OL);
  ~I8051TargetMachine() override;
};

} // end namespace llvm

#endif
