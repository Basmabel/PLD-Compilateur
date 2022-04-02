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
    movq    $-72, -80(%rbp)
    movq    %rbp, %rax
    addq    -80(%rbp), %rax
    movq    %rax, -80(%rbp)
    movq    $1, -88(%rbp)
    movq    $-8, -96(%rbp)
    movq    %rbp, %rax
    addq    -96(%rbp), %rax
    movq    %rax, -96(%rbp)
    movq    -96(%rbp), %rax
    movq    -88(%rbp), %r10
    movq    %r10, (%rax)
    movq    $2, -104(%rbp)
    movq    $-24, -112(%rbp)
    movq    %rbp, %rax
    addq    -112(%rbp), %rax
    movq    %rax, -112(%rbp)
    movq    -112(%rbp), %rax
    movq    -104(%rbp), %r10
    movq    %r10, (%rax)
    movq    $3, -120(%rbp)
    movq    $-40, -128(%rbp)
    movq    %rbp, %rax
    addq    -128(%rbp), %rax
    movq    %rax, -128(%rbp)
    movq    -128(%rbp), %rax
    movq    -120(%rbp), %r10
    movq    %r10, (%rax)
    movq    $4, -136(%rbp)
    movq    $-56, -144(%rbp)
    movq    %rbp, %rax
    addq    -144(%rbp), %rax
    movq    %rax, -144(%rbp)
    movq    -144(%rbp), %rax
    movq    -136(%rbp), %r10
    movq    %r10, (%rax)
    movq    -24(%rbp), %rax
    addq    -40(%rbp), %rax
    movq    %rax, -152(%rbp)
    movq    -152(%rbp), %rax
    addq    -56(%rbp), %rax
    movq    %rax, -160(%rbp)
    movq    -160(%rbp), %rax
    imulq    -8(%rbp), %rax
    movq    %rax, -168(%rbp)
    movq    $3, -176(%rbp)
    movq    -168(%rbp), %rax
    cltd
 	 idivl    -176(%rbp)
    movq    %rax, -184(%rbp)
    movq    $-72, -192(%rbp)
    movq    %rbp, %rax
    addq    -192(%rbp), %rax
    movq    %rax, -192(%rbp)
    movq    -192(%rbp), %rax
    movq    -184(%rbp), %r10
    movq    %r10, (%rax)
    movq    -72(%rbp), %rax
    #epilogue
    popq %rbp
    ret
