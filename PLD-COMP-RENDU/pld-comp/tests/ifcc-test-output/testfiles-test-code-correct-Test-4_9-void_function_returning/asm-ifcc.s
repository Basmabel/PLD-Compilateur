.globl    do_nothing
 do_nothing: 
    #prologue
    pushq %rbp
    movq %rsp, %rbp
    jmp    do_nothing_exit_block
do_nothing_exit_block:
    #epilogue
    popq %rbp
    ret
