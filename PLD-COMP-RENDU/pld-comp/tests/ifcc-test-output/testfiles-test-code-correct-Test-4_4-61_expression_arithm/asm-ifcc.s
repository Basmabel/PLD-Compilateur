.globl    main
 main: 
    #prologue
    pushq %rbp
    movq %rsp, %rbp
    movq    $1, -48(%rbp)
    movq    -8(%rbp), %rax
    movq    -48(%rbp), %r10
    movq    %r10, (%rax)
    movq    $2, -56(%rbp)
    movq    -16(%rbp), %rax
    movq    -56(%rbp), %r10
    movq    %r10, (%rax)
    movq    $3, -64(%rbp)
    movq    -24(%rbp), %rax
    movq    -64(%rbp), %r10
    movq    %r10, (%rax)
    movq    $4, -72(%rbp)
    movq    -32(%rbp), %rax
    movq    -72(%rbp), %r10
    movq    %r10, (%rax)
    movq    $10, -80(%rbp)
    movq    -8(%rbp), %rax
    imulq    -80(%rbp), %rax
    movq    %rax, -88(%rbp)
    movq    $2, -96(%rbp)
    movq    -96(%rbp), %rax
    imulq    -88(%rbp), %rax
    movq    %rax, -104(%rbp)
    movq    -16(%rbp), %rax
    imulq    -104(%rbp), %rax
    movq    %rax, -112(%rbp)
    movq    $2, -120(%rbp)
    movq    -120(%rbp), %rax
    imulq    -24(%rbp), %rax
    movq    %rax, -128(%rbp)
    movq    $10, -136(%rbp)
    movq    -136(%rbp), %rax
    imulq    -128(%rbp), %rax
    movq    %rax, -144(%rbp)
    movq    -112(%rbp), %rax
    addq    -144(%rbp), %rax
    movq    %rax, -152(%rbp)
    movq    -152(%rbp), %rax
    cltd
 	 idivl    -32(%rbp)
    movq    %rax, -160(%rbp)
    movq    -40(%rbp), %rax
    movq    -160(%rbp), %r10
    movq    %r10, (%rax)
    movq    -40(%rbp), %rax
    #epilogue
    popq %rbp
    ret
