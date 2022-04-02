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
    movq    $1, -64(%rbp)
    movq    $-32, -72(%rbp)
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
    movq     (%rax), %rdx
    movq      %rdx, %rax
    movq     %rax,-72(%rbp)
    movq    $0, -88(%rbp)
    movq    $-32, -96(%rbp)
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
    movq    -72(%rbp), %r10
    movq    %r10, (%rax)
    movq    $42, -112(%rbp)
    movq    -112(%rbp), %rax
    #epilogue
    popq %rbp
    ret
