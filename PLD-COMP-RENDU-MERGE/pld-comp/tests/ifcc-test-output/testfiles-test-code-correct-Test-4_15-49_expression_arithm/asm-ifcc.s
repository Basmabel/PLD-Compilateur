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
    movq    $-40, -48(%rbp)
    movq    %rbp, %rax
    addq    -48(%rbp), %rax
    movq    %rax, -48(%rbp)
    movq    $-56, -64(%rbp)
    movq    %rbp, %rax
    addq    -64(%rbp), %rax
    movq    %rax, -64(%rbp)
    movq    $1, -72(%rbp)
    movq    $-8, -80(%rbp)
    movq    %rbp, %rax
    addq    -80(%rbp), %rax
    movq    %rax, -80(%rbp)
    movq    -80(%rbp), %rax
    movq    -72(%rbp), %r10
    movq    %r10, (%rax)
    movq    $2, -88(%rbp)
    movq    -88(%rbp), %rax
    imulq    -8(%rbp), %rax
    movq    %rax, -96(%rbp)
    movq    $-24, -104(%rbp)
    movq    %rbp, %rax
    addq    -104(%rbp), %rax
    movq    %rax, -104(%rbp)
    movq    -104(%rbp), %rax
    movq    -96(%rbp), %r10
    movq    %r10, (%rax)
    movq    $3, -112(%rbp)
    movq    -24(%rbp), %rax
    subq    -112(%rbp), %rax
    movq    %rax, -120(%rbp)
    movq    $-40, -128(%rbp)
    movq    %rbp, %rax
    addq    -128(%rbp), %rax
    movq    %rax, -128(%rbp)
    movq    -128(%rbp), %rax
    movq    -120(%rbp), %r10
    movq    %r10, (%rax)
    movq    $4, -136(%rbp)
    movq    -56(%rbp), %rax
    addq    -136(%rbp), %rax
    movq    %rax, -144(%rbp)
    movq    $-56, -152(%rbp)
    movq    %rbp, %rax
    addq    -152(%rbp), %rax
    movq    %rax, -152(%rbp)
    movq    -152(%rbp), %rax
    movq    -144(%rbp), %r10
    movq    %r10, (%rax)
    movq    -56(%rbp), %rax
    #epilogue
    popq %rbp
    ret
