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
    movq    $3, -56(%rbp)
    movq    $-8, -64(%rbp)
    movq    %rbp, %rax
    addq    -64(%rbp), %rax
    movq    %rax, -64(%rbp)
    movq    -64(%rbp), %rax
    movq    -56(%rbp), %r10
    movq    %r10, (%rax)
    movq    $2, -72(%rbp)
    movq    $-24, -80(%rbp)
    movq    %rbp, %rax
    addq    -80(%rbp), %rax
    movq    %rax, -80(%rbp)
    movq    -80(%rbp), %rax
    movq    -72(%rbp), %r10
    movq    %r10, (%rax)
    movq    -8(%rbp), %rax
    addq    -24(%rbp), %rax
    movq    %rax, -88(%rbp)
    movq    $5, -96(%rbp)
    movq    -88(%rbp), %rax
    cltd
 	 idivl    -96(%rbp)
    movq    %rax, -104(%rbp)
    movq    $-40, -112(%rbp)
    movq    %rbp, %rax
    addq    -112(%rbp), %rax
    movq    %rax, -112(%rbp)
    movq    -112(%rbp), %rax
    movq    -104(%rbp), %r10
    movq    %r10, (%rax)
    movq    -40(%rbp), %rax
    #epilogue
    popq %rbp
    ret
