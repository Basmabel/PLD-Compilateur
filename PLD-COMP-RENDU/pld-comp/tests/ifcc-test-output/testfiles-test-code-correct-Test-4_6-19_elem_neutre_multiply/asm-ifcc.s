.globl    main
 main: 
    #prologue
    pushq %rbp
    movq %rsp, %rbp
    movq    $6, -24(%rbp)
    movq    -8(%rbp), %rax
    movq    -24(%rbp), %r10
    movq    %r10, (%rax)
    movq    $1, -32(%rbp)
    movq    $5, -40(%rbp)
    movq    -40(%rbp), %rax
    imulq    -32(%rbp), %rax
    movq    %rax, -48(%rbp)
    movq    -48(%rbp), %rax
    addq    -8(%rbp), %rax
    movq    %rax, -56(%rbp)
    movq    -16(%rbp), %rax
    movq    -56(%rbp), %r10
    movq    %r10, (%rax)
    movq    -8(%rbp), %rax
    #epilogue
    popq %rbp
    ret
