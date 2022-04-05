.globl    main
 main: 
    #prologue
    pushq %rbp
    movq %rsp, %rbp
    movq    $1, -16(%rbp)
    movq    -8(%rbp), %rax
    movq    -16(%rbp), %r10
    movq    %r10, (%rax)
    movq    $4, -24(%rbp)
    movq    -24(%rbp), %rax
    imulq    -8(%rbp), %rax
    movq    %rax, -32(%rbp)
    movq    $5, -40(%rbp)
    movq    -32(%rbp), %rax
    addq    -40(%rbp), %rax
    movq    %rax, -48(%rbp)
    movq    $3, -56(%rbp)
    movq    -48(%rbp), %rax
    cltd
 	 idivl    -56(%rbp)
    movq    %rax, -64(%rbp)
    movq    $2, -72(%rbp)
    movq    -64(%rbp), %rax
    addq    -72(%rbp), %rax
    movq    %rax, -80(%rbp)
    movq    -8(%rbp), %rax
    movq    -80(%rbp), %r10
    movq    %r10, (%rax)
    movq    -8(%rbp), %rax
    #epilogue
    popq %rbp
    ret
