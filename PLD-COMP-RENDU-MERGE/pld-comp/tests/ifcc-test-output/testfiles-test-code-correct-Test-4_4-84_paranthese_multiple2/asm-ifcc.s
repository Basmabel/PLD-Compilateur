.globl    main
 main: 
    #prologue
    pushq %rbp
    movq %rsp, %rbp
    movq    $10, -8(%rbp)
    movq    $2, -16(%rbp)
    movq    -16(%rbp), %rax
    imulq    -8(%rbp), %rax
    movq    %rax, -24(%rbp)
    movq    $6, -32(%rbp)
    movq    $3, -40(%rbp)
    movq    -32(%rbp), %rax
    cltd
 	 idivl    -40(%rbp)
    movq    %rax, -48(%rbp)
    movq    -24(%rbp), %rax
    addq    -48(%rbp), %rax
    movq    %rax, -56(%rbp)
    movq    $2, -64(%rbp)
    movq    -56(%rbp), %rax
    cltd
 	 idivl    -64(%rbp)
    movq    %rax, -72(%rbp)
    movq    -72(%rbp), %rax
    #epilogue
    popq %rbp
    ret
