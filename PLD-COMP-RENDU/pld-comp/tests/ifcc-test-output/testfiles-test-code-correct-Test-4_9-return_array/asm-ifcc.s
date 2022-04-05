.globl    main
 main: 
    #prologue
    pushq %rbp
    movq %rsp, %rbp
    subq   $40, %rsp
    movq    $0, -24(%rbp)
    movq    $-8, -32(%rbp)
    movq    $-8, -40(%rbp)
    movq    -24(%rbp), %rax
    imulq    -40(%rbp), %rax
    movq    %rax, -40(%rbp)
    movq    -40(%rbp), %rax
    addq    -32(%rbp), %rax
    movq    %rax, -32(%rbp)
    movq    %rbp, %rax
    addq    -32(%rbp), %rax
    movq    %rax, -32(%rbp)
    movq    -32(%rbp), %rax
    movq     (%rax), %rdx
    movq      %rdx, %rax
    movq     %rax,-32(%rbp)
    movq    -32(%rbp), %rax
    jmp    main_exit_block
main_exit_block:
    #epilogue
    leave
    ret
