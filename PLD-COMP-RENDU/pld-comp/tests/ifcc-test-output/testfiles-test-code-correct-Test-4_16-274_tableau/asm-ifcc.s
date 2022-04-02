.globl    main
 main: 
    #prologue
    pushq %rbp
    movq %rsp, %rbp
    movq    $8, -8(%rbp)
    movq    -16(%rbp), %rax
    movq    -8(%rbp), %r10
    movq    %r10, (%rax)
    movq    $56, -56(%rbp)
    movq    $0, -64(%rbp)
    movq    $-24, -72(%rbp)
    movq    $-8, -80(%rbp)
    movq    -64(%rbp), %rax
    imulq    -80(%rbp), %rax
    movq    %rax, -80(%rbp)
    movq    -80(%rbp), %rax
    addq    -72(%rbp), %rax
    movq    %rax, -72(%rbp)
    movq    %rbp, %rax
    addq    -72(%rbp), %rax
    movq    %rax, -72(%rbp)
    movq    -72(%rbp), %rax
    movq    -56(%rbp), %r10
    movq    %r10, (%rax)
    movq    $78, -88(%rbp)
    movq    $1, -96(%rbp)
    movq    $1, -104(%rbp)
    movq    -96(%rbp), %rax
    andq    -104(%rbp), %rax
    movq    %rax, -112(%rbp)
    movq    $-24, -120(%rbp)
    movq    $-8, -128(%rbp)
    movq    -112(%rbp), %rax
    imulq    -128(%rbp), %rax
    movq    %rax, -128(%rbp)
    movq    -128(%rbp), %rax
    addq    -120(%rbp), %rax
    movq    %rax, -120(%rbp)
    movq    %rbp, %rax
    addq    -120(%rbp), %rax
    movq    %rax, -120(%rbp)
    movq    -120(%rbp), %rax
    movq    -88(%rbp), %r10
    movq    %r10, (%rax)
    movq    $38, -136(%rbp)
    movq    $3, -144(%rbp)
    movq    $-24, -152(%rbp)
    movq    $-8, -160(%rbp)
    movq    -144(%rbp), %rax
    imulq    -160(%rbp), %rax
    movq    %rax, -160(%rbp)
    movq    -160(%rbp), %rax
    addq    -152(%rbp), %rax
    movq    %rax, -152(%rbp)
    movq    %rbp, %rax
    addq    -152(%rbp), %rax
    movq    %rax, -152(%rbp)
    movq    -152(%rbp), %rax
    movq    -136(%rbp), %r10
    movq    %r10, (%rax)
    movq    $42, -168(%rbp)
    movq    -168(%rbp), %rax
    #epilogue
    popq %rbp
    ret
