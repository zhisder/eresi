/*
** $Id: op_cli.c,v 1.1 2007-01-26 14:18:37 heroine Exp $
**
*/
#include <libasm.h>
#include <libasm-int.h>

/*
  <instruction func="op_cli" opcode="0xfa"/>
*/

int op_cli(asm_instr *new, u_char *opcode, u_int len, asm_processor *proc) {
    new->len += 1;
  new->ptr_instr = opcode;
    new->instr = ASM_CLI;
  return (new->len);
}