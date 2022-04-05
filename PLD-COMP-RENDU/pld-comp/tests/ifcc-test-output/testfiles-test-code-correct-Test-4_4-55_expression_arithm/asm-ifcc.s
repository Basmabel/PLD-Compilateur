.globl    main
 main: 
    #prologue
    pushq %rbp
    movq %rsp, %rbp
    movq    $2, -32(%rbp)
    movq    -8(%rbp), %rax
    movq    -32(%rbp), %r10
    movq    %r10, (%rax)
    movq    $4, -40(%rbp)
    movq    -16(%rbp), %rax
    movq    -40(%rbp), %r10
    movq    %r10, (%rax)
    movq    $10, -48(%rbp)
    movq    -48(%rbp), %rax
    cltd
 	 idivl    -8(%rbp)
    movq    %rax, -56(%rbp)
    movq    $2, -64(%rbp)
    movq    -64(%rbp), %rax
    imulq    -16(%rbp), %rax
    movq    %rax, -72(%rbp)
    movq    $4, -80(%rbp)
    movq    -72(%rbp), %rax
    cltd
 	 idivl    -80(%rbp)
    movq    %rax, -88(%rbp)
    movq    -56(%rbp), %rax
    addq    -88(%rbp), %rax
    movq    %rax, -96(%rbp)
    movq    -24(%rbp), %rax
    movq    -96(%rbp), %r10
    movq    %r10, (%rax)
    movq    -24(%rbp), %rax
    #epilogue
    popq %rbp
    ret
