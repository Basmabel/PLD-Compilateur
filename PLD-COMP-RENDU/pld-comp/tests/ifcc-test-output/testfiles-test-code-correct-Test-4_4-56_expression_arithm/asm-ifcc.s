.globl    main
 main: 
    #prologue
    pushq %rbp
    movq %rsp, %rbp
    movq    $2, -40(%rbp)
    movq    -8(%rbp), %rax
    movq    -40(%rbp), %r10
    movq    %r10, (%rax)
    movq    $4, -48(%rbp)
    movq    -16(%rbp), %rax
    movq    -48(%rbp), %r10
    movq    %r10, (%rax)
    movq    $3, -56(%rbp)
    movq    -24(%rbp), %rax
    movq    -56(%rbp), %r10
    movq    %r10, (%rax)
    movq    $10, -64(%rbp)
    movq    -8(%rbp), %rax
    imulq    -64(%rbp), %rax
    movq    %rax, -72(%rbp)
    movq    $5, -80(%rbp)
    movq    -16(%rbp), %rax
    imulq    -80(%rbp), %rax
    movq    %rax, -88(%rbp)
    movq    -72(%rbp), %rax
    addq    -88(%rbp), %rax
    movq    %rax, -96(%rbp)
    movq    -96(%rbp), %rax
    cltd
 	 idivl    -24(%rbp)
    movq    %rax, -104(%rbp)
    movq    -32(%rbp), %rax
    movq    -104(%rbp), %r10
    movq    %r10, (%rax)
    movq    -32(%rbp), %rax
    #epilogue
    popq %rbp
    ret
