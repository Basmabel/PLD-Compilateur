.globl    main
 main: 
    #prologue
    pushq %rbp
    movq %rsp, %rbp
    movq    $4, -40(%rbp)
    movq    -8(%rbp), %rax
    movq    -40(%rbp), %r10
    movq    %r10, (%rax)
    movq    $1, -48(%rbp)
    movq    -16(%rbp), %rax
    movq    -48(%rbp), %r10
    movq    %r10, (%rax)
    movq    $3, -56(%rbp)
    movq    -24(%rbp), %rax
    movq    -56(%rbp), %r10
    movq    %r10, (%rax)
    movq    $10, -64(%rbp)
    movq    -8(%rbp), %rax
    addq    -16(%rbp), %rax
    movq    %rax, -72(%rbp)
    movq    -72(%rbp), %rax
    imulq    -64(%rbp), %rax
    movq    %rax, -80(%rbp)
    movq    $3, -88(%rbp)
    movq    -24(%rbp), %rax
    imulq    -88(%rbp), %rax
    movq    %rax, -96(%rbp)
    movq    $20, -104(%rbp)
    movq    -104(%rbp), %rax
    imulq    -96(%rbp), %rax
    movq    %rax, -112(%rbp)
    movq    $5, -120(%rbp)
    movq    -112(%rbp), %rax
    addq    -120(%rbp), %rax
    movq    %rax, -128(%rbp)
    movq    -80(%rbp), %rax
    cltd
 	 idivl    -128(%rbp)
    movq    %rax, -136(%rbp)
    movq    -32(%rbp), %rax
    movq    -136(%rbp), %r10
    movq    %r10, (%rax)
    movq    -32(%rbp), %rax
    #epilogue
    popq %rbp
    ret
