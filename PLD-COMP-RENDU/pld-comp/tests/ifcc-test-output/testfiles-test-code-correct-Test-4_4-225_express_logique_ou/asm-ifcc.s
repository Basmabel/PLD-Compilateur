.globl    main
 main: 
    #prologue
    pushq %rbp
    movq %rsp, %rbp
    movq    $-8, -16(%rbp)
    movq    %rbp, %rax
    addq    -16(%rbp), %rax
    movq    %rax, -16(%rbp)
    movq    $5, -24(%rbp)
    movq    $7, -32(%rbp)
    movq    -24(%rbp), %rax
    orq    -32(%rbp), %rax
    movq    %rax, -40(%rbp)
    movq    $-8, -48(%rbp)
    movq    %rbp, %rax
    addq    -48(%rbp), %rax
    movq    %rax, -48(%rbp)
    movq    -48(%rbp), %rax
    movq    -40(%rbp), %r10
    movq    %r10, (%rax)
    movq    -8(%rbp), %rax
    #epilogue
    popq %rbp
    ret
