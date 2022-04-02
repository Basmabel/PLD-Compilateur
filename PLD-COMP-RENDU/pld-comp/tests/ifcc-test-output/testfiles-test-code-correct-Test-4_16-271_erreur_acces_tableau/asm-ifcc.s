.globl    main
 main: 
    #prologue
    pushq %rbp
    movq %rsp, %rbp
    movq    $8, -8(%rbp)
    movq    -16(%rbp), %rax
    movq    -8(%rbp), %r10
    movq    %r10, (%rax)
    movq    $8, -56(%rbp)
    movq    $4, -64(%rbp)
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
    movq    $42, -88(%rbp)
    movq    -88(%rbp), %rax
    #epilogue
    popq %rbp
    ret
