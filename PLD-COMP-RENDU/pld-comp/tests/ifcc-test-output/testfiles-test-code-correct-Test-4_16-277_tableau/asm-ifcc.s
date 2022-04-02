.globl    main
 main: 
    #prologue
    pushq %rbp
    movq %rsp, %rbp
    movq    $8, -8(%rbp)
    movq    -16(%rbp), %rax
    movq    -8(%rbp), %r10
    movq    %r10, (%rax)
    movq    $1, -56(%rbp)
    movq    $-24, -64(%rbp)
    movq    $-8, -72(%rbp)
    movq    -56(%rbp), %rax
    imulq    -72(%rbp), %rax
    movq    %rax, -72(%rbp)
    movq    -72(%rbp), %rax
    addq    -64(%rbp), %rax
    movq    %rax, -64(%rbp)
    movq    %rbp, %rax
    addq    -64(%rbp), %rax
    movq    %rax, -64(%rbp)
    movq    -64(%rbp), %rax
    movq     (%rax), %rdx
    movq      %rdx, %rax
    movq     %rax,-64(%rbp)
    movq    $0, -80(%rbp)
    movq    $-24, -88(%rbp)
    movq    $-8, -96(%rbp)
    movq    -80(%rbp), %rax
    imulq    -96(%rbp), %rax
    movq    %rax, -96(%rbp)
    movq    -96(%rbp), %rax
    addq    -88(%rbp), %rax
    movq    %rax, -88(%rbp)
    movq    %rbp, %rax
    addq    -88(%rbp), %rax
    movq    %rax, -88(%rbp)
    movq    -88(%rbp), %rax
    movq    -64(%rbp), %r10
    movq    %r10, (%rax)
    movq    $42, -104(%rbp)
    movq    -104(%rbp), %rax
    #epilogue
    popq %rbp
    ret
