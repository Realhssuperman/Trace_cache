// See LICENSE for license details.

#include "insn_template.h"

reg_t rv32_fadd_d(processor_t* p, insn_t insn, reg_t pc)
{
  int xlen = 32;
  reg_t npc = sext_xlen(pc + insn_length( MATCH_FADD_D));
  #include "insns/fadd_d.h"
  return npc;
}

reg_t rv64_fadd_d(processor_t* p, insn_t insn, reg_t pc)
{
  int xlen = 64;
  reg_t npc = sext_xlen(pc + insn_length( MATCH_FADD_D));
  #include "insns/fadd_d.h"
  return npc;
}
