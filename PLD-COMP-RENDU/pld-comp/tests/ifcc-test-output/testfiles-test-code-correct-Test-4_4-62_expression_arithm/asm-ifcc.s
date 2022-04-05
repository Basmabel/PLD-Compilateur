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
    movq    $2, -88(%rbp)
    movq    -8(%rbp), %rax
    addq    -88(%rbp), %rax
    movq    %rax, -96(%rbp)
    movq    -96(%rbp), %rax
    imulq    -80(%rbp), %rax
    movq    %rax, -104(%rbp)
    movq    $5, -112(%rbp)
    movq    -16(%rbp), %rax
    imulq    -112(%rbp), %rax
    movq    %rax, -120(%rbp)
    movq    $2, -128(%rbp)
    movq    -128(%rbp), %rax
    imulq    -120(%rbp), %rax
    movq    %rax, -136(%rbp)
    movq    -104(%rbp), %rax
    addq    -136(%rbp), %rax
    movq    %rax, -144(%rbp)
    movq    $3, -152(%rbp)
    movq    $3, -160(%rbp)
    movq    -24(%rbp), %rax
    addq    -160(%rbp), %rax
    movq    %rax, -168(%rbp)
    movq    -168(%rbp), %rax
    imulq    -152(%rbp), %rax
    movq    %rax, -176(%rbp)
    movq    -176(%rbp), %rax
    addq    -32(%rbp), %rax
    movq    %rax, -184(%rbp)
    movq    -144(%rbp), %rax
    cltd
 	 idivl    -184(%rbp)
    movq    %rax, -192(%rbp)
    movq    -40(%rbp), %rax
    movq    -192(%rbp), %r10
    movq    %r10, (%rax)
    movq    -40(%rbp), %rax
    #epilogue
    popq %rbp
    ret
