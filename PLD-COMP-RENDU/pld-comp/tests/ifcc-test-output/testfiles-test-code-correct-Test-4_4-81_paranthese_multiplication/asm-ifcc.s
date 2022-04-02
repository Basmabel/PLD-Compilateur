.globl    main
 main: 
    #prologue
    pushq %rbp
    movq %rsp, %rbp
    movq    $5, -8(%rbp)
    movq    $3, -16(%rbp)
    movq    $2, -24(%rbp)
    movq    -24(%rbp), %rax
    imulq    -16(%rbp), %rax
    movq    %rax, -32(%rbp)
    movq    -32(%rbp), %rax
    imulq    -8(%rbp), %rax
    movq    %rax, -40(%rbp)
    movq    -40(%rbp), %rax
    #epilogue
    popq %rbp
    ret
