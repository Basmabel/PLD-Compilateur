.globl    main
 main: 
    #prologue
    pushq %rbp
    movq %rsp, %rbp
    movq    $12, -16(%rbp)
    movq    -8(%rbp), %rax
    movq    -16(%rbp), %r10
    movq    %r10, (%rax)
    movq    $6, -24(%rbp)
    movq    $2, -32(%rbp)
    movq    -24(%rbp), %rax
    cltd
 	 idivl    -32(%rbp)
    movq    %rax, -40(%rbp)
    movq    -8(%rbp), %rax
    cltd
 	 idivl    -40(%rbp)
    movq    %rax, -48(%rbp)
    movq    -48(%rbp), %rax
    #epilogue
    popq %rbp
    ret
