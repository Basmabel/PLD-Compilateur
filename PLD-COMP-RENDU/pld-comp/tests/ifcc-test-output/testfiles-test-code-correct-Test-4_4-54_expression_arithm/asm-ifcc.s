.globl    main
 main: 
    #prologue
    pushq %rbp
    movq %rsp, %rbp
    movq    $2, -32(%rbp)
    movq    $-8, -40(%rbp)
    movq    %rbp, %rax
    addq    -40(%rbp), %rax
    movq    %rax, -40(%rbp)
    movq    -40(%rbp), %rax
    movq    -32(%rbp), %r10
    movq    %r10, (%rax)
    movq    $4, -48(%rbp)
    movq    $-16, -56(%rbp)
    movq    %rbp, %rax
    addq    -56(%rbp), %rax
    movq    %rax, -56(%rbp)
    movq    -56(%rbp), %rax
    movq    -48(%rbp), %r10
    movq    %r10, (%rax)
    movq    $10, -64(%rbp)
    movq    -8(%rbp), %rax
    imulq    -64(%rbp), %rax
    movq    %rax, -72(%rbp)
    movq    $2, -80(%rbp)
    movq    -80(%rbp), %rax
    imulq    -16(%rbp), %rax
    movq    %rax, -88(%rbp)
    movq    -72(%rbp), %rax
    addq    -88(%rbp), %rax
    movq    %rax, -96(%rbp)
    movq    $4, -104(%rbp)
    movq    -96(%rbp), %rax
    cltd
 	 idivl    -104(%rbp)
    movq    %rax, -112(%rbp)
    movq    $-24, -120(%rbp)
    movq    %rbp, %rax
    addq    -120(%rbp), %rax
    movq    %rax, -120(%rbp)
    movq    -120(%rbp), %rax
    movq    -112(%rbp), %r10
    movq    %r10, (%rax)
    movq    -24(%rbp), %rax
    #epilogue
    popq %rbp
    ret
