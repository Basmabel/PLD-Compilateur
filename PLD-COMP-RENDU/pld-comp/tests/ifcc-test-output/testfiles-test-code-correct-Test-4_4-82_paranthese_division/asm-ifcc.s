.globl    main
 main: 
    #prologue
    pushq %rbp
    movq %rsp, %rbp
    movq    $-8, -16(%rbp)
    movq    %rbp, %rax
    addq    -16(%rbp), %rax
    movq    %rax, -16(%rbp)
    movq    $12, -24(%rbp)
    movq    $-8, -32(%rbp)
    movq    %rbp, %rax
    addq    -32(%rbp), %rax
    movq    %rax, -32(%rbp)
    movq    -32(%rbp), %rax
    movq    -24(%rbp), %r10
    movq    %r10, (%rax)
    movq    $6, -40(%rbp)
    movq    $2, -48(%rbp)
    movq    -40(%rbp), %rax
    cltd
 	 idivl    -48(%rbp)
    movq    %rax, -56(%rbp)
    movq    -8(%rbp), %rax
    cltd
 	 idivl    -56(%rbp)
    movq    %rax, -64(%rbp)
    movq    -64(%rbp), %rax
    #epilogue
    popq %rbp
    ret
