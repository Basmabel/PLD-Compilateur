.globl    main
 main: 
    #prologue
    pushq %rbp
    movq %rsp, %rbp
    movq    $1, -16(%rbp)
    movq    -16(%rbp), %rax
    movq    %rax, -8(%rbp)
    movq    $2, -32(%rbp)
    movq    -32(%rbp), %rax
    movq    %rax, -24(%rbp)
    movq    -8(%rbp), %rax
    subq    -24(%rbp), %rax
    movq    %rax, -40(%rbp)
    movq    -40(%rbp), %rax
    #epilogue
    popq %rbp
    ret
