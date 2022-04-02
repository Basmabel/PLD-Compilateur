.globl    main
 main: 
    #prologue
    pushq %rbp
    movq %rsp, %rbp
    movq    $-8, -16(%rbp)
    movq    %rbp, %rax
    addq    -16(%rbp), %rax
    movq    %rax, -16(%rbp)
    movq    $1, -24(%rbp)
    movq    $-8, -32(%rbp)
    movq    %rbp, %rax
    addq    -32(%rbp), %rax
    movq    %rax, -32(%rbp)
    movq    -32(%rbp), %rax
    movq    -24(%rbp), %r10
    movq    %r10, (%rax)
    movq    $-40, -48(%rbp)
    movq    %rbp, %rax
    addq    -48(%rbp), %rax
    movq    %rax, -48(%rbp)
    movq    $2, -56(%rbp)
    movq    $-40, -64(%rbp)
    movq    %rbp, %rax
    addq    -64(%rbp), %rax
    movq    %rax, -64(%rbp)
    movq    -64(%rbp), %rax
    movq    -56(%rbp), %r10
    movq    %r10, (%rax)
    movq    $-72, -80(%rbp)
    movq    %rbp, %rax
    addq    -80(%rbp), %rax
    movq    %rax, -80(%rbp)
    movq    $3, -88(%rbp)
    movq    $-72, -96(%rbp)
    movq    %rbp, %rax
    addq    -96(%rbp), %rax
    movq    %rax, -96(%rbp)
    movq    -96(%rbp), %rax
    movq    -88(%rbp), %r10
    movq    %r10, (%rax)
    movq    $-104, -112(%rbp)
    movq    %rbp, %rax
    addq    -112(%rbp), %rax
    movq    %rax, -112(%rbp)
    movq    $4, -120(%rbp)
    movq    $-104, -128(%rbp)
    movq    %rbp, %rax
    addq    -128(%rbp), %rax
    movq    %rax, -128(%rbp)
    movq    -128(%rbp), %rax
    movq    -120(%rbp), %r10
    movq    %r10, (%rax)
    movq    $-136, -144(%rbp)
    movq    %rbp, %rax
    addq    -144(%rbp), %rax
    movq    %rax, -144(%rbp)
    movq    -8(%rbp), %rax
    addq    -40(%rbp), %rax
    movq    %rax, -152(%rbp)
    movq    -152(%rbp), %rax
    addq    -72(%rbp), %rax
    movq    %rax, -160(%rbp)
    movq    -160(%rbp), %rax
    addq    -104(%rbp), %rax
    movq    %rax, -168(%rbp)
    movq    $-136, -176(%rbp)
    movq    %rbp, %rax
    addq    -176(%rbp), %rax
    movq    %rax, -176(%rbp)
    movq    -176(%rbp), %rax
    movq    -168(%rbp), %r10
    movq    %r10, (%rax)
    movq    -136(%rbp), %rax
    #epilogue
    popq %rbp
    ret
