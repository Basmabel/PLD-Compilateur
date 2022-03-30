.globl    main
 main: 
    #prologue
    pushq %rbp
    movq %rsp, %rbp
    movq    $15, -24(%rbp)
    movq    $-16, -32(%rbp)
    movq    %rbp, %rax
    addq    -32(%rbp), %rax
    movq    %rax, -32(%rbp)
    movq    -32(%rbp), %rax
    movq    -24(%rbp), %r10
    movq    %r10, (%rax)
    movq    $6, -40(%rbp)
    movq    -40(%rbp), %rax
    addq    -16(%rbp), %rax
    movq    %rax, -48(%rbp)
    movq    $32, -56(%rbp)
    movq    -48(%rbp), %rax
    xorq    -56(%rbp), %rax
    movq    %rax, -64(%rbp)
    movq    $-8, -72(%rbp)
    movq    %rbp, %rax
    addq    -72(%rbp), %rax
    movq    %rax, -72(%rbp)
    movq    -72(%rbp), %rax
    movq    -64(%rbp), %r10
    movq    %r10, (%rax)
    movq    -8(%rbp), %rax
    #epilogue
    popq %rbp
    ret
