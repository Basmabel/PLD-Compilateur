.globl    main
 main: 
    #prologue
    pushq %rbp
    movq %rsp, %rbp
    subq   $88, %rsp
    movq    $5, -32(%rbp)
    movq    $-8, -40(%rbp)
    movq    %rbp, %rax
    addq    -40(%rbp), %rax
    movq    %rax, -40(%rbp)
    movq    -40(%rbp), %rax
    movq    -32(%rbp), %r10
    movq    %r10, (%rax)
    movq    $4, -48(%rbp)
    movq    -48(%rbp), %rax
    addq    -8(%rbp), %rax
    movq    %rax, -56(%rbp)
    movq    $-16, -64(%rbp)
    movq    %rbp, %rax
    addq    -64(%rbp), %rax
    movq    %rax, -64(%rbp)
    movq    -64(%rbp), %rax
    movq    -56(%rbp), %r10
    movq    %r10, (%rax)
    movq    -8(%rbp), %rax
    cqo
 	 idivq    -16(%rbp)
    movq    %rax, -72(%rbp)
    movq    $-24, -80(%rbp)
    movq    %rbp, %rax
    addq    -80(%rbp), %rax
    movq    %rax, -80(%rbp)
    movq    -80(%rbp), %rax
    movq    -72(%rbp), %r10
    movq    %r10, (%rax)
    movq    -24(%rbp), %rax
    jmp    main_exit_block
main_exit_block:
    #epilogue
    leave
    ret
