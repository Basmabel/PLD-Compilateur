.globl    main
 main: 
    #prologue
    pushq %rbp
    movq %rsp, %rbp
    movq    $5, -24(%rbp)
    movq    -8(%rbp), %rax
    movq    -24(%rbp), %r10
    movq    %r10, (%rax)
    movq    $4, -32(%rbp)
    movq    $8, -40(%rbp)
    movq    -40(%rbp), %rax
    cltd
 	 idivl    -8(%rbp)
    movq    %rax, -48(%rbp)
    movq    $5, -56(%rbp)
    movq    -56(%rbp), %rax
    imulq    -48(%rbp), %rax
    movq    %rax, -64(%rbp)
    movq    -32(%rbp), %rax
    addq    -64(%rbp), %rax
    movq    %rax, -72(%rbp)
    movq    $9, -80(%rbp)
    movq    -72(%rbp), %rax
    subq    -80(%rbp), %rax
    movq    %rax, -88(%rbp)
    movq    -16(%rbp), %rax
    movq    -88(%rbp), %r10
    movq    %r10, (%rax)
    movq    -16(%rbp), %rax
    #epilogue
    popq %rbp
    ret
