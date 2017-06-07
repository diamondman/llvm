//===-- I8051MCTargetDesc.h - I8051 Target Descriptions ---------*- C++ -*-===//
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

#ifndef LLVM_I8051_MCTARGET_DESC_H
#define LLVM_I8051_MCTARGET_DESC_H

#include "llvm/Support/DataTypes.h"

namespace llvm {

Target &getTheI8051Target();

} // end namespace llvm

#endif // LLVM_I8051_MCTARGET_DESC_H
