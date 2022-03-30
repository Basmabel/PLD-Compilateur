.globl    main
 main: 
    #prologue
    pushq %rbp
    movq %rsp, %rbp
    movq    $1, -32(%rbp)
    movq    $-8, -40(%rbp)
    movq    %rbp, %rax
    addq    -40(%rbp), %rax
    movq    %rax, -40(%rbp)
    movq    -40(%rbp), %rax
    movq    -32(%rbp), %r10
    movq    %r10, (%rax)
    movq    $2, -48(%rbp)
    movq    $-16, -56(%rbp)
    movq    %rbp, %rax
    addq    -56(%rbp), %rax
    movq    %rax, -56(%rbp)
    movq    -56(%rbp), %rax
    movq    -48(%rbp), %r10
    movq    %r10, (%rax)
    movq    $3, -64(%rbp)
    movq    $-24, -72(%rbp)
    movq    %rbp, %rax
    addq    -72(%rbp), %rax
    movq    %rax, -72(%rbp)
    movq    -72(%rbp), %rax
    movq    -64(%rbp), %r10
    movq    %r10, (%rax)
    movq    $4, -88(%rbp)
    movq    -88(%rbp), %rax
    imulq    -8(%rbp), %rax
    movq    %rax, -96(%rbp)
    movq    $5, -104(%rbp)
    movq    -96(%rbp), %rax
    addq    -104(%rbp), %rax
    movq    %rax, -112(%rbp)
    movq    -24(%rbp), %rax
    imulq    -16(%rbp), %rax
    movq    %rax, -120(%rbp)
    movq    -112(%rbp), %rax
    addq    -120(%rbp), %rax
    movq    %rax, -128(%rbp)
    movq    $-80, -136(%rbp)
    movq    %rbp, %rax
    addq    -136(%rbp), %rax
    movq    %rax, -136(%rbp)
    movq    -136(%rbp), %rax
    movq    -128(%rbp), %r10
    movq    %r10, (%rax)
    movq    -80(%rbp), %rax
    #epilogue
    popq %rbp
    ret
