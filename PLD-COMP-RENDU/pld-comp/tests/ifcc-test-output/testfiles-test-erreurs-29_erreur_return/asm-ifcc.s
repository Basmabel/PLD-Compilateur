.globl    main
 main: 
    #prologue
    pushq %rbp
    movq %rsp, %rbp
    movq    $5, -16(%rbp)
    movq    -8(%rbp), %rax
    movq    -16(%rbp), %r10
    movq    %r10, (%rax)
    movq    $4, -24(%rbp)
    movq    -24(%rbp), %rax
    imulq    -8(%rbp), %rax
    movq    %rax, -32(%rbp)
    movq    $2, -40(%rbp)
    movq    -8(%rbp), %rax
    cltd
 	 idivl    -40(%rbp)
    movq    %rax, -48(%rbp)
    movq    -32(%rbp), %rax
    addq    -48(%rbp), %rax
    movq    %rax, -56(%rbp)
    movq    -8(%rbp), %rax
    movq    -56(%rbp), %r10
    movq    %r10, (%rax)
    #epilogue
    popq %rbp
    ret
