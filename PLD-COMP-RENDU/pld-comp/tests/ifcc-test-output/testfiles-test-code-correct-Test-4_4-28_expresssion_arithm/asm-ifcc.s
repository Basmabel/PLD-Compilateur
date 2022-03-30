.globl    main
 main: 
    #prologue
    pushq %rbp
    movq %rsp, %rbp
    movq    $5, -24(%rbp)
    movq    $-8, -32(%rbp)
    movq    %rbp, %rax
    addq    -32(%rbp), %rax
    movq    %rax, -32(%rbp)
    movq    -32(%rbp), %rax
    movq    -24(%rbp), %r10
    movq    %r10, (%rax)
    movq    $7, -40(%rbp)
    movq    $-16, -48(%rbp)
    movq    %rbp, %rax
    addq    -48(%rbp), %rax
    movq    %rax, -48(%rbp)
    movq    -48(%rbp), %rax
    movq    -40(%rbp), %r10
    movq    %r10, (%rax)
    movq    $2, -64(%rbp)
    movq    -64(%rbp), %rax
    imulq    -16(%rbp), %rax
    movq    %rax, -72(%rbp)
    movq    -8(%rbp), %rax
    addq    -72(%rbp), %rax
    movq    %rax, -80(%rbp)
    movq    $5, -88(%rbp)
    movq    -88(%rbp), %rax
    imulq    -8(%rbp), %rax
    movq    %rax, -96(%rbp)
    movq    $3, -104(%rbp)
    movq    -96(%rbp), %rax
    addq    -104(%rbp), %rax
    movq    %rax, -112(%rbp)
    movq    -80(%rbp), %rax
    cltd
 	 idivl    -112(%rbp)
    movq    %rax, -120(%rbp)
    movq    $-56, -128(%rbp)
    movq    %rbp, %rax
    addq    -128(%rbp), %rax
    movq    %rax, -128(%rbp)
    movq    -128(%rbp), %rax
    movq    -120(%rbp), %r10
    movq    %r10, (%rax)
    movq    -56(%rbp), %rax
    #epilogue
    popq %rbp
    ret
