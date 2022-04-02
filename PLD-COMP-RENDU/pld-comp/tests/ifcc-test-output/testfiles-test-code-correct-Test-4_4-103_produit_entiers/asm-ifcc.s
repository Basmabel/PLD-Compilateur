.globl    main
 main: 
    #prologue
    pushq %rbp
    movq %rsp, %rbp
    movq    $1, -8(%rbp)
    movq    $2, -16(%rbp)
    movq    -16(%rbp), %rax
    imulq    -8(%rbp), %rax
    movq    %rax, -24(%rbp)
    movq    $3, -32(%rbp)
    movq    -32(%rbp), %rax
    imulq    -24(%rbp), %rax
    movq    %rax, -40(%rbp)
    movq    $4, -48(%rbp)
    movq    -48(%rbp), %rax
    imulq    -40(%rbp), %rax
    movq    %rax, -56(%rbp)
    movq    -56(%rbp), %rax
    #epilogue
    popq %rbp
    ret
