.globl    main
 main: 
    #prologue
    pushq %rbp
    movq %rsp, %rbp
    movq    $1, -48(%rbp)
    movq    $-8, -56(%rbp)
    movq    %rbp, %rax
    addq    -56(%rbp), %rax
    movq    %rax, -56(%rbp)
    movq    -56(%rbp), %rax
    movq    -48(%rbp), %r10
    movq    %r10, (%rax)
    movq    $2, -64(%rbp)
    movq    $-16, -72(%rbp)
    movq    %rbp, %rax
    addq    -72(%rbp), %rax
    movq    %rax, -72(%rbp)
    movq    -72(%rbp), %rax
    movq    -64(%rbp), %r10
    movq    %r10, (%rax)
    movq    $3, -80(%rbp)
    movq    $-24, -88(%rbp)
    movq    %rbp, %rax
    addq    -88(%rbp), %rax
    movq    %rax, -88(%rbp)
    movq    -88(%rbp), %rax
    movq    -80(%rbp), %r10
    movq    %r10, (%rax)
    movq    $4, -96(%rbp)
    movq    $-32, -104(%rbp)
    movq    %rbp, %rax
    addq    -104(%rbp), %rax
    movq    %rax, -104(%rbp)
    movq    -104(%rbp), %rax
    movq    -96(%rbp), %r10
    movq    %r10, (%rax)
    movq    $2, -112(%rbp)
    movq    $2, -120(%rbp)
    movq    -8(%rbp), %rax
    addq    -120(%rbp), %rax
    movq    %rax, -128(%rbp)
    movq    -128(%rbp), %rax
    imulq    -112(%rbp), %rax
    movq    %rax, -136(%rbp)
    movq    $5, -144(%rbp)
    movq    -16(%rbp), %rax
    imulq    -144(%rbp), %rax
    movq    %rax, -152(%rbp)
    movq    $2, -160(%rbp)
    movq    -160(%rbp), %rax
    imulq    -152(%rbp), %rax
    movq    %rax, -168(%rbp)
    movq    -136(%rbp), %rax
    addq    -168(%rbp), %rax
    movq    %rax, -176(%rbp)
    movq    $3, -184(%rbp)
    movq    $3, -192(%rbp)
    movq    -24(%rbp), %rax
    addq    -192(%rbp), %rax
    movq    %rax, -200(%rbp)
    movq    -200(%rbp), %rax
    imulq    -184(%rbp), %rax
    movq    %rax, -208(%rbp)
    movq    -208(%rbp), %rax
    addq    -32(%rbp), %rax
    movq    %rax, -216(%rbp)
    movq    -176(%rbp), %rax
    cltd
 	 idivl    -216(%rbp)
    movq    %rax, -224(%rbp)
    movq    $-40, -232(%rbp)
    movq    %rbp, %rax
    addq    -232(%rbp), %rax
    movq    %rax, -232(%rbp)
    movq    -232(%rbp), %rax
    movq    -224(%rbp), %r10
    movq    %r10, (%rax)
    movq    -40(%rbp), %rax
    #epilogue
    popq %rbp
    ret
