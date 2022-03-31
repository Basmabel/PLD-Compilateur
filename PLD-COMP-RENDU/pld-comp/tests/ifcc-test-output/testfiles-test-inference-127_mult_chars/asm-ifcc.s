.globl    main
 main: 
    #prologue
    pushq %rbp
    movq %rsp, %rbp
    movq    $1, -32(%rbp)
    movq    -32(%rbp), %rax
    movq    %rax, -8(%rbp)
    movq    $3, -40(%rbp)
    movq    -40(%rbp), %rax
    movq    %rax, -16(%rbp)
    movq    -16(%rbp), %rax
    imulq    -8(%rbp), %rax
    movq    %rax, -48(%rbp)
    movq    -48(%rbp), %rax
    movq    %rax, -24(%rbp)
    movq    -24(%rbp), %rax
    #epilogue
    popq %rbp
    ret
