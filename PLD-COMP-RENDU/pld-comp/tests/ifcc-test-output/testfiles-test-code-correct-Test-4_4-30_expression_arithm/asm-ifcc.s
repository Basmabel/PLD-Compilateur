.globl    main
 main: 
    #prologue
    pushq %rbp
    movq %rsp, %rbp
    movq    $-8, -16(%rbp)
    movq    %rbp, %rax
    addq    -16(%rbp), %rax
    movq    %rax, -16(%rbp)
    movq    $1, -24(%rbp)
    movq    $-8, -32(%rbp)
    movq    %rbp, %rax
    addq    -32(%rbp), %rax
    movq    %rax, -32(%rbp)
    movq    -32(%rbp), %rax
    movq    -24(%rbp), %r10
    movq    %r10, (%rax)
    movq    $4, -40(%rbp)
    movq    -40(%rbp), %rax
    imulq    -8(%rbp), %rax
    movq    %rax, -48(%rbp)
    movq    $5, -56(%rbp)
    movq    -48(%rbp), %rax
    addq    -56(%rbp), %rax
    movq    %rax, -64(%rbp)
    movq    $3, -72(%rbp)
    movq    -64(%rbp), %rax
    cltd
 	 idivl    -72(%rbp)
    movq    %rax, -80(%rbp)
    movq    $2, -88(%rbp)
    movq    -80(%rbp), %rax
    addq    -88(%rbp), %rax
    movq    %rax, -96(%rbp)
    movq    $-8, -104(%rbp)
    movq    %rbp, %rax
    addq    -104(%rbp), %rax
    movq    %rax, -104(%rbp)
    movq    -104(%rbp), %rax
    movq    -96(%rbp), %r10
    movq    %r10, (%rax)
    movq    -8(%rbp), %rax
    #epilogue
    popq %rbp
    ret
