.globl    main
 main: 
    #prologue
    pushq %rbp
    movq %rsp, %rbp
    movq    $1, -40(%rbp)
    movq    -8(%rbp), %rax
    movq    -40(%rbp), %r10
    movq    %r10, (%rax)
    movq    $4, -48(%rbp)
    movq    -16(%rbp), %rax
    movq    -48(%rbp), %r10
    movq    %r10, (%rax)
    movq    $9, -56(%rbp)
    movq    -24(%rbp), %rax
    movq    -56(%rbp), %r10
    movq    %r10, (%rax)
    movq    $10, -64(%rbp)
    movq    -8(%rbp), %rax
    imulq    -64(%rbp), %rax
    movq    %rax, -72(%rbp)
    movq    -32(%rbp), %rax
    movq    -72(%rbp), %r10
    movq    %r10, (%rax)
    movq    -32(%rbp), %rax
    #epilogue
    popq %rbp
    ret
