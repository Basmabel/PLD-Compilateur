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
    movq    $4, -56(%rbp)
    movq    $8, -64(%rbp)
    movq    -64(%rbp), %rax
    cltd
 	 idivl    -8(%rbp)
    movq    %rax, -72(%rbp)
    movq    $5, -80(%rbp)
    movq    -80(%rbp), %rax
    imulq    -72(%rbp), %rax
    movq    %rax, -88(%rbp)
    movq    -56(%rbp), %rax
    addq    -88(%rbp), %rax
    movq    %rax, -96(%rbp)
    movq    $9, -104(%rbp)
    movq    -96(%rbp), %rax
    subq    -104(%rbp), %rax
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
