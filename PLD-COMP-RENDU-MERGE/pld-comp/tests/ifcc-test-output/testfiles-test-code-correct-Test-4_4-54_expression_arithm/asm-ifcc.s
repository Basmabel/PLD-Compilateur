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
    movq    $2, -56(%rbp)
    movq    $-8, -64(%rbp)
    movq    %rbp, %rax
    addq    -64(%rbp), %rax
    movq    %rax, -64(%rbp)
    movq    -64(%rbp), %rax
    movq    -56(%rbp), %r10
    movq    %r10, (%rax)
    movq    $4, -72(%rbp)
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
    movq    $2, -104(%rbp)
    movq    -104(%rbp), %rax
    imulq    -24(%rbp), %rax
    movq    %rax, -112(%rbp)
    movq    -96(%rbp), %rax
    addq    -112(%rbp), %rax
    movq    %rax, -120(%rbp)
    movq    $4, -128(%rbp)
    movq    -120(%rbp), %rax
    cltd
 	 idivl    -128(%rbp)
    movq    %rax, -136(%rbp)
    movq    $-40, -144(%rbp)
    movq    %rbp, %rax
    addq    -144(%rbp), %rax
    movq    %rax, -144(%rbp)
    movq    -144(%rbp), %rax
    movq    -136(%rbp), %r10
    movq    %r10, (%rax)
    movq    -40(%rbp), %rax
    #epilogue
    popq %rbp
    ret
