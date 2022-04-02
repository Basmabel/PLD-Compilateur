.globl    main
 main: 
    #prologue
    pushq %rbp
    movq %rsp, %rbp
    movq    $56, -40(%rbp)
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
    movq    $42, -72(%rbp)
    movq    -72(%rbp), %rax
    #epilogue
    popq %rbp
    ret
