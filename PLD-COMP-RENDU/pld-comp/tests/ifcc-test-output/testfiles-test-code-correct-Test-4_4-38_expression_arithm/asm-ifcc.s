.globl    main
 main: 
    #prologue
    pushq %rbp
    movq %rsp, %rbp
    movq    $3, -32(%rbp)
    movq    -8(%rbp), %rax
    movq    -32(%rbp), %r10
    movq    %r10, (%rax)
    movq    $2, -40(%rbp)
    movq    -16(%rbp), %rax
    movq    -40(%rbp), %r10
    movq    %r10, (%rax)
    movq    -8(%rbp), %rax
    addq    -16(%rbp), %rax
    movq    %rax, -48(%rbp)
    movq    $5, -56(%rbp)
    movq    -48(%rbp), %rax
    cltd
 	 idivl    -56(%rbp)
    movq    %rax, -64(%rbp)
    movq    -24(%rbp), %rax
    movq    -64(%rbp), %r10
    movq    %r10, (%rax)
    movq    -24(%rbp), %rax
    #epilogue
    popq %rbp
    ret
