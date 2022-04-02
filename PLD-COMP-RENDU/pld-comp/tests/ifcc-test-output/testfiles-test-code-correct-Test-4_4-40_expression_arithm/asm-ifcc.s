.globl    main
 main: 
    #prologue
    pushq %rbp
    movq %rsp, %rbp
    movq    $3, -24(%rbp)
    movq    -8(%rbp), %rax
    movq    -24(%rbp), %r10
    movq    %r10, (%rax)
    movq    $5, -32(%rbp)
    movq    -16(%rbp), %rax
    movq    -32(%rbp), %r10
    movq    %r10, (%rax)
    movq    $12, -48(%rbp)
    movq    -8(%rbp), %rax
    addq    -48(%rbp), %rax
    movq    %rax, -56(%rbp)
    movq    -56(%rbp), %rax
    cltd
 	 idivl    -16(%rbp)
    movq    %rax, -64(%rbp)
    movq    -40(%rbp), %rax
    movq    -64(%rbp), %r10
    movq    %r10, (%rax)
    movq    -40(%rbp), %rax
    #epilogue
    popq %rbp
    ret
