.globl    main
 main: 
    #prologue
    pushq %rbp
    movq %rsp, %rbp
    movq    $6, -40(%rbp)
    movq    -48(%rbp), %rax
    movq    -40(%rbp), %r10
    movq    %r10, (%rax)
    movq    $5, -56(%rbp)
    movq    -64(%rbp), %rax
    movq    -56(%rbp), %r10
    movq    %r10, (%rax)
    movq    $8, -72(%rbp)
    movq    $-8, -80(%rbp)
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
    movq    $-8, -96(%rbp)
    movq    $-8, -104(%rbp)
    movq    -64(%rbp), %rax
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
    movq    -96(%rbp), %rax
    #epilogue
    popq %rbp
    ret
