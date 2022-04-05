.globl    main
 main: 
    #prologue
    pushq %rbp
    movq %rsp, %rbp
    movq    -8(%rbp), %rax
    addq    -16(%rbp), %rax
    movq    %rax, -32(%rbp)
    movq    -32(%rbp), %rax
    addq    -24(%rbp), %rax
    movq    %rax, -40(%rbp)
    movq    -40(%rbp), %rax
    #epilogue
    popq %rbp
    ret
