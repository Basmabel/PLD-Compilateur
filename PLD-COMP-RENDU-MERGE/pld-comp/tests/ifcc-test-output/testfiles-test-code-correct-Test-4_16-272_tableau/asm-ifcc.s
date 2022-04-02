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
    movq    $3, -64(%rbp)
    movq    $-72, -80(%rbp)
    movq    %rbp, %rax
    addq    -80(%rbp), %rax
    movq    %rax, -80(%rbp)
    movq    -80(%rbp), %rax
    movq    -64(%rbp), %r10
    movq    %r10, (%rax)
    movq    $8, -88(%rbp)
    movq    $-32, -96(%rbp)
    movq    $-8, -104(%rbp)
    movq    -72(%rbp), %rax
    imulq    -104(%rbp), %rax
    movq    %rax, -104(%rbp)
    movq    -104(%rbp), %rax
    addq    -96(%rbp), %rax
    movq    %rax, -96(%rbp)
    movq    %rbp, %rax
    addq    -96(%rbp), %rax
    movq    %rax, -96(%rbp)
    movq    -96(%rbp), %rax
    movq    -88(%rbp), %r10
    movq    %r10, (%rax)
    movq    $3, -112(%rbp)
    movq    $-32, -120(%rbp)
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
    movq     (%rax), %rdx
    movq      %rdx, %rax
    movq     %rax,-120(%rbp)
    movq    -120(%rbp), %rax
    #epilogue
    popq %rbp
    ret
