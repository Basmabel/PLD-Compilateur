.globl    main
 main: 
    #prologue
    pushq %rbp
    movq %rsp, %rbp
    movq    $8, -40(%rbp)
    movq    $2, -48(%rbp)
    movq    $-8, -56(%rbp)
    movq    $-8, -64(%rbp)
    movq    -48(%rbp), %rax
    imulq    -64(%rbp), %rax
    movq    %rax, -64(%rbp)
    movq    -64(%rbp), %rax
    addq    -56(%rbp), %rax
    movq    %rax, -56(%rbp)
    movq    %rbp, %rax
    addq    -56(%rbp), %rax
    movq    %rax, -56(%rbp)
    movq    -56(%rbp), %rax
    movq    -40(%rbp), %r10
    movq    %r10, (%rax)
    movq    $1, -72(%rbp)
    movq    $1, -80(%rbp)
    movq    -72(%rbp), %rax
    addq    -80(%rbp), %rax
    movq    %rax, -88(%rbp)
    movq    $-8, -96(%rbp)
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
    movq    -96(%rbp), %rax
    #epilogue
    popq %rbp
    ret
