.globl    main
 main: 
    #prologue
    pushq %rbp
    movq %rsp, %rbp
    movq    $5, -24(%rbp)
    movq    -8(%rbp), %rax
    movq    -24(%rbp), %r10
    movq    %r10, (%rax)
    movq    $7, -32(%rbp)
    movq    -16(%rbp), %rax
    movq    -32(%rbp), %r10
    movq    %r10, (%rax)
    movq    $2, -48(%rbp)
    movq    -48(%rbp), %rax
    imulq    -16(%rbp), %rax
    movq    %rax, -56(%rbp)
    movq    -8(%rbp), %rax
    addq    -56(%rbp), %rax
    movq    %rax, -64(%rbp)
    movq    $5, -72(%rbp)
    movq    -72(%rbp), %rax
    imulq    -8(%rbp), %rax
    movq    %rax, -80(%rbp)
    movq    $3, -88(%rbp)
    movq    -80(%rbp), %rax
    addq    -88(%rbp), %rax
    movq    %rax, -96(%rbp)
    movq    -64(%rbp), %rax
    cltd
 	 idivl    -96(%rbp)
    movq    %rax, -104(%rbp)
    movq    -40(%rbp), %rax
    movq    -104(%rbp), %r10
    movq    %r10, (%rax)
    movq    -40(%rbp), %rax
    #epilogue
    popq %rbp
    ret
