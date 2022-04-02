.globl    main
 main: 
    #prologue
    pushq %rbp
    movq %rsp, %rbp
    movq    $-8, -16(%rbp)
    movq    %rbp, %rax
    addq    -16(%rbp), %rax
    movq    %rax, -16(%rbp)
    movq    $-24, -32(%rbp)
    movq    %rbp, %rax
    addq    -32(%rbp), %rax
    movq    %rax, -32(%rbp)
    movq    $6, -40(%rbp)
    movq    $-8, -48(%rbp)
    movq    %rbp, %rax
    addq    -48(%rbp), %rax
    movq    %rax, -48(%rbp)
    movq    -48(%rbp), %rax
    movq    -40(%rbp), %r10
    movq    %r10, (%rax)
    movq    $1, -56(%rbp)
    movq    $5, -64(%rbp)
    movq    -64(%rbp), %rax
    imulq    -56(%rbp), %rax
    movq    %rax, -72(%rbp)
    movq    -72(%rbp), %rax
    addq    -8(%rbp), %rax
    movq    %rax, -80(%rbp)
    movq    $-24, -88(%rbp)
    movq    %rbp, %rax
    addq    -88(%rbp), %rax
    movq    %rax, -88(%rbp)
    movq    -88(%rbp), %rax
    movq    -80(%rbp), %r10
    movq    %r10, (%rax)
    movq    -8(%rbp), %rax
    #epilogue
    popq %rbp
    ret
