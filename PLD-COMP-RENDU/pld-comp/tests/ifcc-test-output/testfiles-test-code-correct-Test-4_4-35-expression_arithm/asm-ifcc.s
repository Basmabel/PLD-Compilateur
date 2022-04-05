.globl    main
 main: 
    #prologue
    pushq %rbp
    movq %rsp, %rbp
    movq    $1, -32(%rbp)
    movq    -8(%rbp), %rax
    movq    -32(%rbp), %r10
    movq    %r10, (%rax)
    movq    $2, -40(%rbp)
    movq    -16(%rbp), %rax
    movq    -40(%rbp), %r10
    movq    %r10, (%rax)
    movq    $3, -48(%rbp)
    movq    -24(%rbp), %rax
    movq    -48(%rbp), %r10
    movq    %r10, (%rax)
    movq    $4, -64(%rbp)
    movq    -64(%rbp), %rax
    imulq    -8(%rbp), %rax
    movq    %rax, -72(%rbp)
    movq    $5, -80(%rbp)
    movq    -72(%rbp), %rax
    addq    -80(%rbp), %rax
    movq    %rax, -88(%rbp)
    movq    -24(%rbp), %rax
    imulq    -16(%rbp), %rax
    movq    %rax, -96(%rbp)
    movq    -88(%rbp), %rax
    addq    -96(%rbp), %rax
    movq    %rax, -104(%rbp)
    movq    -56(%rbp), %rax
    movq    -104(%rbp), %r10
    movq    %r10, (%rax)
    movq    -56(%rbp), %rax
    #epilogue
    popq %rbp
    ret
