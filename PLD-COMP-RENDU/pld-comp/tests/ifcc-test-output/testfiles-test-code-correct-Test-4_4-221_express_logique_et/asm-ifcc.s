.globl    main
 main: 
    #prologue
    pushq %rbp
    movq %rsp, %rbp
    movq    $7, -8(%rbp)
    movq    $5, -16(%rbp)
    movq    $5, -24(%rbp)
    movq    -24(%rbp), %rax
    imulq    -16(%rbp), %rax
    movq    %rax, -32(%rbp)
    movq    -8(%rbp), %rax
    andq    -32(%rbp), %rax
    movq    %rax, -40(%rbp)
    movq    -40(%rbp), %rax
    #epilogue
    popq %rbp
    ret
