.globl    main
 main: 
    #prologue
    pushq %rbp
    movq %rsp, %rbp
    movq    $-8, -16(%rbp)
    movq    %rbp, %rax
    addq    -16(%rbp), %rax
    movq    %rax, -16(%rbp)
    movq    $-24, -32(%rbp)
    movq    %rbp, %rax
    addq    -32(%rbp), %rax
    movq    %rax, -32(%rbp)
    movq    $-40, -48(%rbp)
    movq    %rbp, %rax
    addq    -48(%rbp), %rax
    movq    %rax, -48(%rbp)
    movq    $-56, -64(%rbp)
    movq    %rbp, %rax
    addq    -64(%rbp), %rax
    movq    %rax, -64(%rbp)
    movq    $4, -72(%rbp)
    movq    $-8, -80(%rbp)
    movq    %rbp, %rax
    addq    -80(%rbp), %rax
    movq    %rax, -80(%rbp)
    movq    -80(%rbp), %rax
    movq    -72(%rbp), %r10
    movq    %r10, (%rax)
    movq    $1, -88(%rbp)
    movq    $-24, -96(%rbp)
    movq    %rbp, %rax
    addq    -96(%rbp), %rax
    movq    %rax, -96(%rbp)
    movq    -96(%rbp), %rax
    movq    -88(%rbp), %r10
    movq    %r10, (%rax)
    movq    $3, -104(%rbp)
    movq    $-40, -112(%rbp)
    movq    %rbp, %rax
    addq    -112(%rbp), %rax
    movq    %rax, -112(%rbp)
    movq    -112(%rbp), %rax
    movq    -104(%rbp), %r10
    movq    %r10, (%rax)
    movq    $10, -120(%rbp)
    movq    -8(%rbp), %rax
    addq    -24(%rbp), %rax
    movq    %rax, -128(%rbp)
    movq    -128(%rbp), %rax
    imulq    -120(%rbp), %rax
    movq    %rax, -136(%rbp)
    movq    $3, -144(%rbp)
    movq    -40(%rbp), %rax
    imulq    -144(%rbp), %rax
    movq    %rax, -152(%rbp)
    movq    $20, -160(%rbp)
    movq    -160(%rbp), %rax
    imulq    -152(%rbp), %rax
    movq    %rax, -168(%rbp)
    movq    $5, -176(%rbp)
    movq    -168(%rbp), %rax
    addq    -176(%rbp), %rax
    movq    %rax, -184(%rbp)
    movq    -136(%rbp), %rax
    cltd
 	 idivl    -184(%rbp)
    movq    %rax, -192(%rbp)
    movq    $-56, -200(%rbp)
    movq    %rbp, %rax
    addq    -200(%rbp), %rax
    movq    %rax, -200(%rbp)
    movq    -200(%rbp), %rax
    movq    -192(%rbp), %r10
    movq    %r10, (%rax)
    movq    -56(%rbp), %rax
    #epilogue
    popq %rbp
    ret
