.globl    main
 main: 
    #prologue
    pushq %rbp
    movq %rsp, %rbp
    movq    $12, -16(%rbp)
    movq    $-8, -24(%rbp)
    movq    %rbp, %rax
    addq    -24(%rbp), %rax
    movq    %rax, -24(%rbp)
    movq    -24(%rbp), %rax
    movq    -16(%rbp), %r10
    movq    %r10, (%rax)
    movq    $6, -32(%rbp)
    movq    $2, -40(%rbp)
    movq    -32(%rbp), %rax
    cltd
 	 idivl    -40(%rbp)
    movq    %rax, -48(%rbp)
    movq    -8(%rbp), %rax
    cltd
 	 idivl    -48(%rbp)
    movq    %rax, -56(%rbp)
    movq    -56(%rbp), %rax
    #epilogue
    popq %rbp
    ret
