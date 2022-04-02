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
    movq    -8(%rbp), %rax
    addq    -16(%rbp), %rax
    movq    %rax, -80(%rbp)
    movq    -24(%rbp), %rax
    addq    -32(%rbp), %rax
    movq    %rax, -88(%rbp)
    movq    -80(%rbp), %rax
    cltd
 	 idivl    -88(%rbp)
    movq    %rax, -96(%rbp)
    movq    $3, -104(%rbp)
    movq    -104(%rbp), %rax
    imulq    -96(%rbp), %rax
    movq    %rax, -112(%rbp)
    movq    $2, -120(%rbp)
    movq    -8(%rbp), %rax
    addq    -120(%rbp), %rax
    movq    %rax, -128(%rbp)
    movq    -128(%rbp), %rax
    imulq    -112(%rbp), %rax
    movq    %rax, -136(%rbp)
    movq    -40(%rbp), %rax
    movq    -136(%rbp), %r10
    movq    %r10, (%rax)
    movq    -40(%rbp), %rax
    #epilogue
    popq %rbp
    ret
