.globl    main
 main: 
    #prologue
    pushq %rbp
    movq %rsp, %rbp
    movq    $5, -16(%rbp)
    movq    $7, -24(%rbp)
    movq    -16(%rbp), %rax
    orq    -24(%rbp), %rax
    movq    %rax, -32(%rbp)
    movq    -8(%rbp), %rax
    movq    -32(%rbp), %r10
    movq    %r10, (%rax)
    movq    $0, -40(%rbp)
    movq    -8(%rbp), %rax
    xorq    -40(%rbp), %rax
    movq    %rax, -48(%rbp)
    movq    -48(%rbp), %rax
    #epilogue
    popq %rbp
    ret
