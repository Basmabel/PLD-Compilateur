.globl    main
 main: 
    #prologue
    pushq %rbp
    movq %rsp, %rbp
    subq   $64, %rsp
    movq    $5, -24(%rbp)
    movq    $5, -32(%rbp)
    movq    $-16, -40(%rbp)
    movq    %rbp, %rax
    addq    -40(%rbp), %rax
    movq    %rax, -40(%rbp)
    movq    -40(%rbp), %rax
    movq    -32(%rbp), %r10
    movq    %r10, (%rax)
    movq    -24(%rbp), %rax
    addq    -40(%rbp), %rax
    movq    %rax, -48(%rbp)
    movq    $-8, -56(%rbp)
    movq    %rbp, %rax
    addq    -56(%rbp), %rax
    movq    %rax, -56(%rbp)
    movq    -56(%rbp), %rax
    movq    -48(%rbp), %r10
    movq    %r10, (%rax)
    movq    -8(%rbp), %rax
    jmp    main_exit_block
main_exit_block:
    #epilogue
    leave
    ret
