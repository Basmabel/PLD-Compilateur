.globl    main
 main: 
    #prologue
    pushq %rbp
    movq %rsp, %rbp
    movq    $2, -8(%rbp)
    movq    $1, -16(%rbp)
    movq    -8(%rbp), %rax
    addq    -16(%rbp), %rax
    movq    %rax, -24(%rbp)
    movq    -24(%rbp), %rax
    #epilogue
    popq %rbp
    ret
