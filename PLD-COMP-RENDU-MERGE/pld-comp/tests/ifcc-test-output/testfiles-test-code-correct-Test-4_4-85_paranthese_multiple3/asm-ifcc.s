.globl    main
 main: 
    #prologue
    pushq %rbp
    movq %rsp, %rbp
    movq    $5, -8(%rbp)
    movq    $10, -16(%rbp)
    movq    $2, -24(%rbp)
    movq    -24(%rbp), %rax
    imulq    -16(%rbp), %rax
    movq    %rax, -32(%rbp)
    movq    $6, -40(%rbp)
    movq    $3, -48(%rbp)
    movq    -40(%rbp), %rax
    cltd
 	 idivl    -48(%rbp)
    movq    %rax, -56(%rbp)
    movq    -32(%rbp), %rax
    addq    -56(%rbp), %rax
    movq    %rax, -64(%rbp)
    movq    -64(%rbp), %rax
    imulq    -8(%rbp), %rax
    movq    %rax, -72(%rbp)
    movq    $2, -80(%rbp)
    movq    -72(%rbp), %rax
    cltd
 	 idivl    -80(%rbp)
    movq    %rax, -88(%rbp)
    movq    -88(%rbp), %rax
    #epilogue
    popq %rbp
    ret
