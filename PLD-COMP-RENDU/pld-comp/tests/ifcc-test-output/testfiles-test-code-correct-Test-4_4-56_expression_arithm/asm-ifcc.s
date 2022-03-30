.globl    main
 main: 
    #prologue
    pushq %rbp
    movq %rsp, %rbp
    movq    $2, -40(%rbp)
    movq    $-8, -48(%rbp)
    movq    %rbp, %rax
    addq    -48(%rbp), %rax
    movq    %rax, -48(%rbp)
    movq    -48(%rbp), %rax
    movq    -40(%rbp), %r10
    movq    %r10, (%rax)
    movq    $4, -56(%rbp)
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
    movq    $10, -88(%rbp)
    movq    -8(%rbp), %rax
    imulq    -88(%rbp), %rax
    movq    %rax, -96(%rbp)
    movq    $5, -104(%rbp)
    movq    -16(%rbp), %rax
    imulq    -104(%rbp), %rax
    movq    %rax, -112(%rbp)
    movq    -96(%rbp), %rax
    addq    -112(%rbp), %rax
    movq    %rax, -120(%rbp)
    movq    -120(%rbp), %rax
    cltd
 	 idivl    -24(%rbp)
    movq    %rax, -128(%rbp)
    movq    $-32, -136(%rbp)
    movq    %rbp, %rax
    addq    -136(%rbp), %rax
    movq    %rax, -136(%rbp)
    movq    -136(%rbp), %rax
    movq    -128(%rbp), %r10
    movq    %r10, (%rax)
    movq    -32(%rbp), %rax
    #epilogue
    popq %rbp
    ret
