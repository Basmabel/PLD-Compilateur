.globl    main
 main: 
    #prologue
    pushq %rbp
    movq %rsp, %rbp
    movq    $28, -8(%rbp)
    movq    $15, -16(%rbp)
    movq    -8(%rbp), %rax
    andq    -16(%rbp), %rax
    movq    %rax, -24(%rbp)
    movq    $9, -32(%rbp)
    movq    -24(%rbp), %rax
    xorq    -32(%rbp), %rax
    movq    %rax, -40(%rbp)
    movq    -40(%rbp), %rax
    #epilogue
    popq %rbp
    ret
