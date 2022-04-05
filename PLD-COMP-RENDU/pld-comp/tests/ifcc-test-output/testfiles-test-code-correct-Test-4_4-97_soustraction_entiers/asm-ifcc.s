.globl    main
 main: 
    #prologue
    pushq %rbp
    movq %rsp, %rbp
    movq    $10, -8(%rbp)
    movq    $2, -16(%rbp)
    movq    -8(%rbp), %rax
    subq    -16(%rbp), %rax
    movq    %rax, -24(%rbp)
    movq    $3, -32(%rbp)
    movq    -24(%rbp), %rax
    subq    -32(%rbp), %rax
    movq    %rax, -40(%rbp)
    movq    $1, -48(%rbp)
    movq    -40(%rbp), %rax
    subq    -48(%rbp), %rax
    movq    %rax, -56(%rbp)
    movq    -56(%rbp), %rax
    #epilogue
    popq %rbp
    ret
