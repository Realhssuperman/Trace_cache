// See LICENSE for license details.

#include "insn_template.h"

reg_t rv32_fnmsub_s(processor_t* p, insn_t insn, reg_t pc)
{
  int xlen = 32;
  reg_t npc = sext_xlen(pc + insn_length( MATCH_FNMSUB_S));
  #include "insns/fnmsub_s.h"
  return npc;
}

reg_t rv64_fnmsub_s(processor_t* p, insn_t insn, reg_t pc)
{
  int xlen = 64;
  reg_t npc = sext_xlen(pc + insn_length( MATCH_FNMSUB_S));
  #include "insns/fnmsub_s.h"
  return npc;
}
