.globl    main
 main: 
    #prologue
    pushq %rbp
    movq %rsp, %rbp
    movq    $96, -16(%rbp)
    movq    -8(%rbp), %rax
    movq    -16(%rbp), %r10
    movq    %r10, (%rax)
    movq    $64, -24(%rbp)
    movq    -8(%rbp), %rax
    andq    -24(%rbp), %rax
    movq    %rax, -32(%rbp)
    movq    -32(%rbp), %rax
    #epilogue
    popq %rbp
    ret
