.globl    main
 main: 
    #prologue
    pushq %rbp
    movq %rsp, %rbp
    subq   $144, %rsp
    movq    $1, -40(%rbp)
    movq    $-8, -48(%rbp)
    movq    %rbp, %rax
    addq    -48(%rbp), %rax
    movq    %rax, -48(%rbp)
    movq    -48(%rbp), %rax
    movq    -40(%rbp), %r10
    movq    %r10, (%rax)
    movq    $2, -56(%rbp)
    movq    $-16, -64(%rbp)
    movq    %rbp, %rax
    addq    -64(%rbp), %rax
    movq    %rax, -64(%rbp)
    movq    -64(%rbp), %rax
    movq    -56(%rbp), %r10
    movq    %r10, (%rax)
    movq    $3, -72(%rbp)
    movq    $-24, -80(%rbp)
    movq    %rbp, %rax
    addq    -80(%rbp), %rax
    movq    %rax, -80(%rbp)
    movq    -80(%rbp), %rax
    movq    -72(%rbp), %r10
    movq    %r10, (%rax)
    movq    $4, -88(%rbp)
    movq    $-32, -96(%rbp)
    movq    %rbp, %rax
    addq    -96(%rbp), %rax
    movq    %rax, -96(%rbp)
    movq    -96(%rbp), %rax
    movq    -88(%rbp), %r10
    movq    %r10, (%rax)
    movq    -16(%rbp), %rax
    imulq    -8(%rbp), %rax
    movq    %rax, -112(%rbp)
    movq    -112(%rbp), %rax
    cqo
 	 idivq    -24(%rbp)
    movq    %rax, -120(%rbp)
    movq    -32(%rbp), %rax
    imulq    -120(%rbp), %rax
    movq    %rax, -128(%rbp)
    movq    $-104, -136(%rbp)
    movq    %rbp, %rax
    addq    -136(%rbp), %rax
    movq    %rax, -136(%rbp)
    movq    -136(%rbp), %rax
    movq    -128(%rbp), %r10
    movq    %r10, (%rax)
    movq    -104(%rbp), %rax
    jmp    main_exit_block
main_exit_block:
    #epilogue
    leave
    ret
