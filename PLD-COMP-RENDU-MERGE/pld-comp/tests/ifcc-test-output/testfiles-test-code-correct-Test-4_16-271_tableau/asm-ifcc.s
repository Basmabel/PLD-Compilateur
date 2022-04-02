.globl    main
 main: 
    #prologue
    pushq %rbp
    movq %rsp, %rbp
    movq    $8, -8(%rbp)
    movq    $-16, -24(%rbp)
    movq    %rbp, %rax
    addq    -24(%rbp), %rax
    movq    %rax, -24(%rbp)
    movq    -24(%rbp), %rax
    movq    -8(%rbp), %r10
    movq    %r10, (%rax)
    movq    $56, -64(%rbp)
    movq    $0, -72(%rbp)
    movq    $-32, -80(%rbp)
    movq    $-8, -88(%rbp)
    movq    -72(%rbp), %rax
    imulq    -88(%rbp), %rax
    movq    %rax, -88(%rbp)
    movq    -88(%rbp), %rax
    addq    -80(%rbp), %rax
    movq    %rax, -80(%rbp)
    movq    %rbp, %rax
    addq    -80(%rbp), %rax
    movq    %rax, -80(%rbp)
    movq    -80(%rbp), %rax
    movq    -64(%rbp), %r10
    movq    %r10, (%rax)
    movq    $78, -96(%rbp)
    movq    $1, -104(%rbp)
    movq    $-32, -112(%rbp)
    movq    $-8, -120(%rbp)
    movq    -104(%rbp), %rax
    imulq    -120(%rbp), %rax
    movq    %rax, -120(%rbp)
    movq    -120(%rbp), %rax
    addq    -112(%rbp), %rax
    movq    %rax, -112(%rbp)
    movq    %rbp, %rax
    addq    -112(%rbp), %rax
    movq    %rax, -112(%rbp)
    movq    -112(%rbp), %rax
    movq    -96(%rbp), %r10
    movq    %r10, (%rax)
    movq    $38, -128(%rbp)
    movq    $3, -136(%rbp)
    movq    $-32, -144(%rbp)
    movq    $-8, -152(%rbp)
    movq    -136(%rbp), %rax
    imulq    -152(%rbp), %rax
    movq    %rax, -152(%rbp)
    movq    -152(%rbp), %rax
    addq    -144(%rbp), %rax
    movq    %rax, -144(%rbp)
    movq    %rbp, %rax
    addq    -144(%rbp), %rax
    movq    %rax, -144(%rbp)
    movq    -144(%rbp), %rax
    movq    -128(%rbp), %r10
    movq    %r10, (%rax)
    movq    $42, -160(%rbp)
    movq    -160(%rbp), %rax
    #epilogue
    popq %rbp
    ret
