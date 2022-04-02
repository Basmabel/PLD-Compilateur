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
    movq    $5, -40(%rbp)
    movq    $-8, -48(%rbp)
    movq    %rbp, %rax
    addq    -48(%rbp), %rax
    movq    %rax, -48(%rbp)
    movq    -48(%rbp), %rax
    movq    -40(%rbp), %r10
    movq    %r10, (%rax)
    movq    $7, -56(%rbp)
    movq    $-24, -64(%rbp)
    movq    %rbp, %rax
    addq    -64(%rbp), %rax
    movq    %rax, -64(%rbp)
    movq    -64(%rbp), %rax
    movq    -56(%rbp), %r10
    movq    %r10, (%rax)
    movq    $-72, -80(%rbp)
    movq    %rbp, %rax
    addq    -80(%rbp), %rax
    movq    %rax, -80(%rbp)
    movq    $2, -88(%rbp)
    movq    -88(%rbp), %rax
    imulq    -24(%rbp), %rax
    movq    %rax, -96(%rbp)
    movq    -8(%rbp), %rax
    addq    -96(%rbp), %rax
    movq    %rax, -104(%rbp)
    movq    $5, -112(%rbp)
    movq    -112(%rbp), %rax
    imulq    -8(%rbp), %rax
    movq    %rax, -120(%rbp)
    movq    $3, -128(%rbp)
    movq    -120(%rbp), %rax
    addq    -128(%rbp), %rax
    movq    %rax, -136(%rbp)
    movq    -104(%rbp), %rax
    cltd
 	 idivl    -136(%rbp)
    movq    %rax, -144(%rbp)
    movq    $-72, -152(%rbp)
    movq    %rbp, %rax
    addq    -152(%rbp), %rax
    movq    %rax, -152(%rbp)
    movq    -152(%rbp), %rax
    movq    -144(%rbp), %r10
    movq    %r10, (%rax)
    movq    -72(%rbp), %rax
    #epilogue
    popq %rbp
    ret
