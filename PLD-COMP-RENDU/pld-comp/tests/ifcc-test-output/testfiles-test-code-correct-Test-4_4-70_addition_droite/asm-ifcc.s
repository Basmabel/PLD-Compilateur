.globl    main
 main: 
    #prologue
    pushq %rbp
    movq %rsp, %rbp
    movq    $5, -24(%rbp)
    movq    -16(%rbp), %rax
    movq    -24(%rbp), %r10
    movq    %r10, (%rax)
    movq    $5, -32(%rbp)
    movq    -16(%rbp), %rax
    addq    -32(%rbp), %rax
    movq    %rax, -40(%rbp)
    movq    -8(%rbp), %rax
    movq    -40(%rbp), %r10
    movq    %r10, (%rax)
    movq    -8(%rbp), %rax
    #epilogue
    popq %rbp
    ret
