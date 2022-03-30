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
    movq    $4, -40(%rbp)
    movq    $8, -48(%rbp)
    movq    -48(%rbp), %rax
    cltd
 	 idivl    -8(%rbp)
    movq    %rax, -56(%rbp)
    movq    $5, -64(%rbp)
    movq    -64(%rbp), %rax
    imulq    -56(%rbp), %rax
    movq    %rax, -72(%rbp)
    movq    -40(%rbp), %rax
    addq    -72(%rbp), %rax
    movq    %rax, -80(%rbp)
    movq    $9, -88(%rbp)
    movq    -80(%rbp), %rax
    subq    -88(%rbp), %rax
    movq    %rax, -96(%rbp)
    movq    $-16, -104(%rbp)
    movq    %rbp, %rax
    addq    -104(%rbp), %rax
    movq    %rax, -104(%rbp)
    movq    -104(%rbp), %rax
    movq    -96(%rbp), %r10
    movq    %r10, (%rax)
    movq    -16(%rbp), %rax
    #epilogue
    popq %rbp
    ret
