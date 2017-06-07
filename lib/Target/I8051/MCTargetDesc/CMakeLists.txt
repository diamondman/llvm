add_llvm_library(LLVMI8051Desc
  #I8051AsmBackend.cpp
  #I8051ELFObjectWriter.cpp
  #I8051ELFStreamer.cpp
  #I8051MCAsmInfo.cpp
  #I8051MCCodeEmitter.cpp
  #I8051MCExpr.cpp
  I8051MCTargetDesc.cpp
  #I8051TargetStreamer.cpp
)

#add_dependencies(LLVMI8051Desc I8051CommonTableGen)

