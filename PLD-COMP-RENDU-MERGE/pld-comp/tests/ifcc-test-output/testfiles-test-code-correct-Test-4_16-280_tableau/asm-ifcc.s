.globl    main
 main: 
    #prologue
    pushq %rbp
    movq %rsp, %rbp
    movq    $5, -40(%rbp)
    movq    $-48, -56(%rbp)
    movq    %rbp, %rax
    addq    -56(%rbp), %rax
    movq    %rax, -56(%rbp)
    movq    -56(%rbp), %rax
    movq    -40(%rbp), %r10
    movq    %r10, (%rax)
    movq    $5, -64(%rbp)
    movq    $-72, -80(%rbp)
    movq    %rbp, %rax
    addq    -80(%rbp), %rax
    movq    %rax, -80(%rbp)
    movq    -80(%rbp), %rax
    movq    -64(%rbp), %r10
    movq    %r10, (%rax)
    movq    $8, -88(%rbp)
    movq    $-8, -96(%rbp)
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
    movq    $-8, -112(%rbp)
    movq    $-8, -120(%rbp)
    movq    -72(%rbp), %rax
    imulq    -120(%rbp), %rax
    movq    %rax, -120(%rbp)
    movq    -120(%rbp), %rax
    addq    -112(%rbp), %rax
    movq    %rax, -112(%rbp)
    movq    %rbp, %rax
    addq    -112(%rbp), %rax
    movq    %rax, -112(%rbp)
    movq    -112(%rbp), %rax
    movq     (%rax), %rdx
    movq      %rdx, %rax
    movq     %rax,-112(%rbp)
    movq    -112(%rbp), %rax
    #epilogue
    popq %rbp
    ret
