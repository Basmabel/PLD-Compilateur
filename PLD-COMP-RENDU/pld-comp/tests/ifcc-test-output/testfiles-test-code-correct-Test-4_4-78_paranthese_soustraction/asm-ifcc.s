.globl    main
 main: 
    #prologue
    pushq %rbp
    movq %rsp, %rbp
    movq    $5, -8(%rbp)
    movq    $3, -16(%rbp)
    movq    $1, -24(%rbp)
    movq    -16(%rbp), %rax
    subq    -24(%rbp), %rax
    movq    %rax, -32(%rbp)
    movq    -8(%rbp), %rax
    subq    -32(%rbp), %rax
    movq    %rax, -40(%rbp)
    movq    -40(%rbp), %rax
    #epilogue
    popq %rbp
    ret
