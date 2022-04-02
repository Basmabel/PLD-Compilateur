.globl    main
 main: 
    #prologue
    pushq %rbp
    movq %rsp, %rbp
    movq    $1, -48(%rbp)
    movq    -8(%rbp), %rax
    movq    -48(%rbp), %r10
    movq    %r10, (%rax)
    movq    $2, -56(%rbp)
    movq    -16(%rbp), %rax
    movq    -56(%rbp), %r10
    movq    %r10, (%rax)
    movq    $3, -64(%rbp)
    movq    -24(%rbp), %rax
    movq    -64(%rbp), %r10
    movq    %r10, (%rax)
    movq    $4, -72(%rbp)
    movq    -32(%rbp), %rax
    movq    -72(%rbp), %r10
    movq    %r10, (%rax)
    movq    $2, -80(%rbp)
    movq    -16(%rbp), %rax
    imulq    -80(%rbp), %rax
    movq    %rax, -88(%rbp)
    movq    -8(%rbp), %rax
    addq    -24(%rbp), %rax
    movq    %rax, -96(%rbp)
    movq    -96(%rbp), %rax
    imulq    -88(%rbp), %rax
    movq    %rax, -104(%rbp)
    movq    $10, -112(%rbp)
    movq    -32(%rbp), %rax
    addq    -112(%rbp), %rax
    movq    %rax, -120(%rbp)
    movq    -120(%rbp), %rax
    imulq    -104(%rbp), %rax
    movq    %rax, -128(%rbp)
    movq    -40(%rbp), %rax
    movq    -128(%rbp), %r10
    movq    %r10, (%rax)
    movq    -40(%rbp), %rax
    #epilogue
    popq %rbp
    ret
