.globl    main
 main: 
    #prologue
    pushq %rbp
    movq %rsp, %rbp
    subq   $96, %rsp
    movq    $3, -24(%rbp)
    movq    $-8, -32(%rbp)
    movq    %rbp, %rax
    addq    -32(%rbp), %rax
    movq    %rax, -32(%rbp)
    movq    -32(%rbp), %rax
    movq    -24(%rbp), %r10
    movq    %r10, (%rax)
    movq    $5, -40(%rbp)
    movq    $-16, -48(%rbp)
    movq    %rbp, %rax
    addq    -48(%rbp), %rax
    movq    %rax, -48(%rbp)
    movq    -48(%rbp), %rax
    movq    -40(%rbp), %r10
    movq    %r10, (%rax)
    movq    $12, -64(%rbp)
    movq    -8(%rbp), %rax
    addq    -64(%rbp), %rax
    movq    %rax, -72(%rbp)
    movq    -72(%rbp), %rax
    cqo
 	 idivq    -16(%rbp)
    movq    %rax, -80(%rbp)
    movq    $-56, -88(%rbp)
    movq    %rbp, %rax
    addq    -88(%rbp), %rax
    movq    %rax, -88(%rbp)
    movq    -88(%rbp), %rax
    movq    -80(%rbp), %r10
    movq    %r10, (%rax)
    movq    -56(%rbp), %rax
    jmp    main_exit_block
main_exit_block:
    #epilogue
    leave
    ret
