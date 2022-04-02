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
    movq    $-32, -40(%rbp)
    movq    %rbp, %rax
    addq    -40(%rbp), %rax
    movq    %rax, -40(%rbp)
    movq    -40(%rbp), %rax
    movq    -24(%rbp), %r10
    movq    %r10, (%rax)
    movq    $5, -48(%rbp)
    movq    -32(%rbp), %rax
    addq    -48(%rbp), %rax
    movq    %rax, -56(%rbp)
    movq    $-8, -64(%rbp)
    movq    %rbp, %rax
    addq    -64(%rbp), %rax
    movq    %rax, -64(%rbp)
    movq    -64(%rbp), %rax
    movq    -56(%rbp), %r10
    movq    %r10, (%rax)
    movq    -8(%rbp), %rax
    addq    -32(%rbp), %rax
    movq    %rax, -72(%rbp)
    movq    -72(%rbp), %rax
    #epilogue
    popq %rbp
    ret
