.text # declaration of ’text’ section (which means ’program’)
.globl main # entry point to the ELF linker or loader.
main:
movl $55, %eax
ret
