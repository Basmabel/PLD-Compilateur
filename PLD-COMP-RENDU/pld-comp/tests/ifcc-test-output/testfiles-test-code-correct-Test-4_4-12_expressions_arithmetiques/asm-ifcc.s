.globl    main
 main: 
    #prologue
    pushq %rbp
    movq %rsp, %rbp
    movq    $5, -32(%rbp)
    movq    -8(%rbp), %rax
    movq    -32(%rbp), %r10
    movq    %r10, (%rax)
    movq    $4, -40(%rbp)
    movq    -40(%rbp), %rax
    addq    -8(%rbp), %rax
    movq    %rax, -48(%rbp)
    movq    -16(%rbp), %rax
    movq    -48(%rbp), %r10
    movq    %r10, (%rax)
    movq    -8(%rbp), %rax
    cltd
 	 idivl    -16(%rbp)
    movq    %rax, -56(%rbp)
    movq    -24(%rbp), %rax
    movq    -56(%rbp), %r10
    movq    %r10, (%rax)
    movq    -24(%rbp), %rax
    #epilogue
    popq %rbp
    ret
