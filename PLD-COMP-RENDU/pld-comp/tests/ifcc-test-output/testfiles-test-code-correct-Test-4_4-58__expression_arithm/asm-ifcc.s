.globl    main
 main: 
    #prologue
    pushq %rbp
    movq %rsp, %rbp
    movq    $4, -40(%rbp)
    movq    $-8, -48(%rbp)
    movq    %rbp, %rax
    addq    -48(%rbp), %rax
    movq    %rax, -48(%rbp)
    movq    -48(%rbp), %rax
    movq    -40(%rbp), %r10
    movq    %r10, (%rax)
    movq    $1, -56(%rbp)
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
    addq    -16(%rbp), %rax
    movq    %rax, -96(%rbp)
    movq    -96(%rbp), %rax
    imulq    -88(%rbp), %rax
    movq    %rax, -104(%rbp)
    movq    $3, -112(%rbp)
    movq    -24(%rbp), %rax
    imulq    -112(%rbp), %rax
    movq    %rax, -120(%rbp)
    movq    $20, -128(%rbp)
    movq    -128(%rbp), %rax
    imulq    -120(%rbp), %rax
    movq    %rax, -136(%rbp)
    movq    $5, -144(%rbp)
    movq    -136(%rbp), %rax
    addq    -144(%rbp), %rax
    movq    %rax, -152(%rbp)
    movq    -104(%rbp), %rax
    cltd
 	 idivl    -152(%rbp)
    movq    %rax, -160(%rbp)
    movq    $-32, -168(%rbp)
    movq    %rbp, %rax
    addq    -168(%rbp), %rax
    movq    %rax, -168(%rbp)
    movq    -168(%rbp), %rax
    movq    -160(%rbp), %r10
    movq    %r10, (%rax)
    movq    -32(%rbp), %rax
    #epilogue
    popq %rbp
    ret
