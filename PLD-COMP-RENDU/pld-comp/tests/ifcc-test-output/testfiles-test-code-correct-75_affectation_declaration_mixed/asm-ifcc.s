.globl    main
 main: 
    #prologue
    pushq %rbp
    movq %rsp, %rbp
    movq    $5, -16(%rbp)
    movq    -24(%rbp), %rax
    movq    -16(%rbp), %r10
    movq    %r10, (%rax)
    movq    $5, -32(%rbp)
    movq    -24(%rbp), %rax
    addq    -32(%rbp), %rax
    movq    %rax, -40(%rbp)
    movq    -8(%rbp), %rax
    movq    -40(%rbp), %r10
    movq    %r10, (%rax)
    movq    -8(%rbp), %rax
    addq    -24(%rbp), %rax
    movq    %rax, -48(%rbp)
    movq    -48(%rbp), %rax
    #epilogue
    popq %rbp
    ret
