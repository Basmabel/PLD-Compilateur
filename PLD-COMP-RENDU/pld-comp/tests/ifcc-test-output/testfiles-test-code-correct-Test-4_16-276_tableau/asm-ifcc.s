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
    movq    $0, -88(%rbp)
    movq    $-24, -96(%rbp)
    movq    $-8, -104(%rbp)
    movq    -88(%rbp), %rax
    imulq    -104(%rbp), %rax
    movq    %rax, -104(%rbp)
    movq    -104(%rbp), %rax
    addq    -96(%rbp), %rax
    movq    %rax, -96(%rbp)
    movq    %rbp, %rax
    addq    -96(%rbp), %rax
    movq    %rax, -96(%rbp)
    movq    -96(%rbp), %rax
    movq     (%rax), %rdx
    movq      %rdx, %rax
    movq     %rax,-96(%rbp)
    movq    $1, -112(%rbp)
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
    movq    -96(%rbp), %r10
    movq    %r10, (%rax)
    movq    $1, -136(%rbp)
    movq    $-24, -144(%rbp)
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
    movq     (%rax), %rdx
    movq      %rdx, %rax
    movq     %rax,-144(%rbp)
    movq    -144(%rbp), %rax
    #epilogue
    popq %rbp
    ret
