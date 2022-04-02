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
    movq    $98, -88(%rbp)
    movq    $-24, -96(%rbp)
    movq    %rbp, %rax
    addq    -96(%rbp), %rax
    movq    %rax, -96(%rbp)
    movq    -96(%rbp), %rax
    movq    -88(%rbp), %r10
    movq    %r10, (%rax)
    movq    $98, -104(%rbp)
    movq    $-56, -112(%rbp)
    movq    %rbp, %rax
    addq    -112(%rbp), %rax
    movq    %rax, -112(%rbp)
    movq    -112(%rbp), %rax
    movq    -104(%rbp), %r10
    movq    %r10, (%rax)
    movq    -24(%rbp), %rax
    imulq    -8(%rbp), %rax
    movq    %rax, -120(%rbp)
    movq    -120(%rbp), %rax
    addq    -56(%rbp), %rax
    movq    %rax, -128(%rbp)
    movq    $-40, -136(%rbp)
    movq    %rbp, %rax
    addq    -136(%rbp), %rax
    movq    %rax, -136(%rbp)
    movq    -136(%rbp), %rax
    movq    -128(%rbp), %r10
    movq    %r10, (%rax)
    movq    -40(%rbp), %rax
    #epilogue
    popq %rbp
    ret
