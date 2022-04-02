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
    movq    $0, -96(%rbp)
    movq    $-32, -104(%rbp)
    movq    $-8, -112(%rbp)
    movq    -96(%rbp), %rax
    imulq    -112(%rbp), %rax
    movq    %rax, -112(%rbp)
    movq    -112(%rbp), %rax
    addq    -104(%rbp), %rax
    movq    %rax, -104(%rbp)
    movq    %rbp, %rax
    addq    -104(%rbp), %rax
    movq    %rax, -104(%rbp)
    movq    -104(%rbp), %rax
    movq     (%rax), %rdx
    movq      %rdx, %rax
    movq     %rax,-104(%rbp)
    movq    $1, -120(%rbp)
    movq    $-32, -128(%rbp)
    movq    $-8, -136(%rbp)
    movq    -120(%rbp), %rax
    imulq    -136(%rbp), %rax
    movq    %rax, -136(%rbp)
    movq    -136(%rbp), %rax
    addq    -128(%rbp), %rax
    movq    %rax, -128(%rbp)
    movq    %rbp, %rax
    addq    -128(%rbp), %rax
    movq    %rax, -128(%rbp)
    movq    -128(%rbp), %rax
    movq    -104(%rbp), %r10
    movq    %r10, (%rax)
    movq    $1, -144(%rbp)
    movq    $-32, -152(%rbp)
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
    movq     (%rax), %rdx
    movq      %rdx, %rax
    movq     %rax,-152(%rbp)
    movq    -152(%rbp), %rax
    #epilogue
    popq %rbp
    ret
