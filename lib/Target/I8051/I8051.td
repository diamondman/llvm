//===-- I8051.td - Describe the I8051 Target Machine -------*- tablegen -*-===//
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

//===----------------------------------------------------------------------===//
// Target-independent interfaces which we are implementing
//===----------------------------------------------------------------------===//

include "llvm/Target/Target.td"

//===----------------------------------------------------------------------===//
// Declare the target which we are implementing
//===----------------------------------------------------------------------===//

//def I8051AsmWriter : AsmWriter {
//  string AsmWriterClassName  = "InstPrinter";
//  int PassSubtarget = 1;
//  int Variant = 0;
//}

def I8051 : Target {
  // Pull in Instruction Info:
  //let InstructionSet = I8051InstrInfo;
  //let AssemblyParsers  = [I8051AsmParser];
  //let AssemblyWriters = [I8051AsmWriter];
}
