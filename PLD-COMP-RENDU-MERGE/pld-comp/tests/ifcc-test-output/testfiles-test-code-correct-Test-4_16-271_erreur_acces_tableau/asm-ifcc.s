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
    movq    $8, -64(%rbp)
    movq    $4, -72(%rbp)
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
    movq    $42, -96(%rbp)
    movq    -96(%rbp), %rax
    #epilogue
    popq %rbp
    ret
