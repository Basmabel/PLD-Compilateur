.globl    main
 main: 
    #prologue
    pushq %rbp
    movq %rsp, %rbp
    movq    $2, -40(%rbp)
    movq    $-48, -56(%rbp)
    movq    %rbp, %rax
    addq    -56(%rbp), %rax
    movq    %rax, -56(%rbp)
    movq    -56(%rbp), %rax
    movq    -40(%rbp), %r10
    movq    %r10, (%rax)
    movq    $8, -64(%rbp)
    movq    $-8, -72(%rbp)
    movq    $-8, -80(%rbp)
    movq    -48(%rbp), %rax
    imulq    -80(%rbp), %rax
    movq    %rax, -80(%rbp)
    movq    -80(%rbp), %rax
    addq    -72(%rbp), %rax
    movq    %rax, -72(%rbp)
    movq    %rbp, %rax
    addq    -72(%rbp), %rax
    movq    %rax, -72(%rbp)
    movq    -72(%rbp), %rax
    movq    -64(%rbp), %r10
    movq    %r10, (%rax)
    movq    $-8, -88(%rbp)
    movq    $-8, -96(%rbp)
    movq    -48(%rbp), %rax
    imulq    -96(%rbp), %rax
    movq    %rax, -96(%rbp)
    movq    -96(%rbp), %rax
    addq    -88(%rbp), %rax
    movq    %rax, -88(%rbp)
    movq    %rbp, %rax
    addq    -88(%rbp), %rax
    movq    %rax, -88(%rbp)
    movq    -88(%rbp), %rax
    movq     (%rax), %rdx
    movq      %rdx, %rax
    movq     %rax,-88(%rbp)
    movq    -88(%rbp), %rax
    #epilogue
    popq %rbp
    ret
