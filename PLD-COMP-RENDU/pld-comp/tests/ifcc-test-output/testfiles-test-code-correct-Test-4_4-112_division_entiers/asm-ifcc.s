.globl    main
 main: 
    #prologue
    pushq %rbp
    movq %rsp, %rbp
    movq    $24, -8(%rbp)
    movq    $2, -16(%rbp)
    movq    -8(%rbp), %rax
    cltd
 	 idivl    -16(%rbp)
    movq    %rax, -24(%rbp)
    movq    $3, -32(%rbp)
    movq    -24(%rbp), %rax
    cltd
 	 idivl    -32(%rbp)
    movq    %rax, -40(%rbp)
    movq    $4, -48(%rbp)
    movq    -40(%rbp), %rax
    cltd
 	 idivl    -48(%rbp)
    movq    %rax, -56(%rbp)
    movq    -56(%rbp), %rax
    #epilogue
    popq %rbp
    ret
