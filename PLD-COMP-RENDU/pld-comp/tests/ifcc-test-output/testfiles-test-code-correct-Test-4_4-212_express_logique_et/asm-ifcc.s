.globl    main
 main: 
    #prologue
    pushq %rbp
    movq %rsp, %rbp
    movq    $5, -16(%rbp)
    movq    $7, -24(%rbp)
    movq    -16(%rbp), %rax
    andq    -24(%rbp), %rax
    movq    %rax, -32(%rbp)
    movq    $-8, -40(%rbp)
    movq    %rbp, %rax
    addq    -40(%rbp), %rax
    movq    %rax, -40(%rbp)
    movq    -40(%rbp), %rax
    movq    -32(%rbp), %r10
    movq    %r10, (%rax)
    movq    -8(%rbp), %rax
    #epilogue
    popq %rbp
    ret
