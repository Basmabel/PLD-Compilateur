.globl    main
 main: 
    #prologue
    pushq %rbp
    movq %rsp, %rbp
    movq    $23, -8(%rbp)
    movq    $-16, -24(%rbp)
    movq    %rbp, %rax
    addq    -24(%rbp), %rax
    movq    %rax, -24(%rbp)
    movq    -24(%rbp), %rax
    movq    -8(%rbp), %r10
    movq    %r10, (%rax)
    movq    $43, -32(%rbp)
    movq    $-40, -48(%rbp)
    movq    %rbp, %rax
    addq    -48(%rbp), %rax
    movq    %rax, -48(%rbp)
    movq    -48(%rbp), %rax
    movq    -32(%rbp), %r10
    movq    %r10, (%rax)
    movq    -16(%rbp), %rax
    addq    -40(%rbp), %rax
    movq    %rax, -56(%rbp)
    movq    $-64, -72(%rbp)
    movq    %rbp, %rax
    addq    -72(%rbp), %rax
    movq    %rax, -72(%rbp)
    movq    -72(%rbp), %rax
    movq    -56(%rbp), %r10
    movq    %r10, (%rax)
    movq    -64(%rbp), %rax
    #epilogue
    popq %rbp
    ret
