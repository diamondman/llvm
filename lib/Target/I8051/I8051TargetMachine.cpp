//===-- I8051TargetMachine.cpp - Define TargetMachine for I8051 -----------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//
//
//
//===----------------------------------------------------------------------===//

#include "I8051TargetMachine.h"

#include "llvm/CodeGen/Passes.h"
#include "llvm/CodeGen/TargetPassConfig.h"
#include "llvm/IR/LegacyPassManager.h"
#include "llvm/IR/Module.h"
#include "llvm/Support/TargetRegistry.h"

#include "MCTargetDesc/I8051MCTargetDesc.h"

namespace llvm {

/// Processes a CPU name.
static StringRef getCPU(StringRef CPU) {
  if (CPU.empty() || CPU == "generic") {
    return "I8051";
  }

  return CPU;
}

static Reloc::Model getEffectiveRelocModel(Optional<Reloc::Model> RM) {
  return RM.hasValue() ? *RM : Reloc::Static;
}

I8051TargetMachine::I8051TargetMachine(const Target &T, const Triple &TT,
                                       StringRef CPU, StringRef FS,
                                       const TargetOptions &Options,
                                       Optional<Reloc::Model> RM, CodeModel::Model CM,
                                       CodeGenOpt::Level OL)
    : LLVMTargetMachine(
          T, "", TT,
          getCPU(CPU), FS, Options, getEffectiveRelocModel(RM), CM, OL){
  initAsmInfo();
}

I8051TargetMachine::~I8051TargetMachine() {}

extern "C" void LLVMInitializeI8051Target() {
  RegisterTargetMachine<I8051TargetMachine> X(getTheI8051Target());
}
  
} // end of namespace llvm
