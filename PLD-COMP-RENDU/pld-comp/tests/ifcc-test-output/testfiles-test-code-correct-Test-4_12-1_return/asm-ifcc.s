.globl    main
 main: 
    #prologue
    pushq %rbp
    movq %rsp, %rbp
    subq   $120, %rsp
    movq    $98, -16(%rbp)
    movq    $-8, -24(%rbp)
    movq    %rbp, %rax
    addq    -24(%rbp), %rax
    movq    %rax, -24(%rbp)
    movq    -24(%rbp), %rax
    movq    -16(%rbp), %r10
    movq    %r10, (%rax)
    movq    $3, -32(%rbp)
    movq    -32(%rbp), %rax
    jmp    main_exit_block
main_exit_block:
    #epilogue
    leave
    ret