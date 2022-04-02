.globl    main
 main: 
    #prologue
    pushq %rbp
    movq %rsp, %rbp
    movq    $8, -8(%rbp)
    movq    -16(%rbp), %rax
    movq    -8(%rbp), %r10
    movq    %r10, (%rax)
    movq    $3, -56(%rbp)
    movq    -64(%rbp), %rax
    movq    -56(%rbp), %r10
    movq    %r10, (%rax)
    movq    $8, -72(%rbp)
    movq    $-24, -80(%rbp)
    movq    $-8, -88(%rbp)
    movq    -64(%rbp), %rax
    imulq    -88(%rbp), %rax
    movq    %rax, -88(%rbp)
    movq    -88(%rbp), %rax
    addq    -80(%rbp), %rax
    movq    %rax, -80(%rbp)
    movq    %rbp, %rax
    addq    -80(%rbp), %rax
    movq    %rax, -80(%rbp)
    movq    -80(%rbp), %rax
    movq    -72(%rbp), %r10
    movq    %r10, (%rax)
    movq    $3, -96(%rbp)
    movq    $-24, -104(%rbp)
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
    movq    -104(%rbp), %rax
    #epilogue
    popq %rbp
    ret
