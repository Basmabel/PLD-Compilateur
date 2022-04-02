.globl    test
 test: 
    #prologue
    pushq %rbp
    movq %rsp, %rbp
    movq    $2, -16(%rbp)
    movq    -16(%rbp), %rax
    #epilogue
    popq %rbp
    ret
.globl    main
 main: 
    #prologue
    pushq %rbp
    movq %rsp, %rbp
    movq    $6, -24(%rbp)
    movq    -8(%rbp), %rax
    movq    -24(%rbp), %r10
    movq    %r10, (%rax)
    movq    $4, -32(%rbp)
    movq    $5, -40(%rbp)
    movq    -32(%rbp), %rax
    addq    -40(%rbp), %rax
    movq    %rax, -48(%rbp)
    movq    -16(%rbp), %rax
    movq    -48(%rbp), %r10
    movq    %r10, (%rax)
    movq    -8(%rbp), %rax
    #epilogue
    popq %rbp
    ret
