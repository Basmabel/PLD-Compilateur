.globl    main
 main: 
    #prologue
    pushq %rbp
    movq %rsp, %rbp
    movq    $-8, -16(%rbp)
    movq    %rbp, %rax
    addq    -16(%rbp), %rax
    movq    %rax, -16(%rbp)
    movq    $-24, -32(%rbp)
    movq    %rbp, %rax
    addq    -32(%rbp), %rax
    movq    %rax, -32(%rbp)
    movq    $-40, -48(%rbp)
    movq    %rbp, %rax
    addq    -48(%rbp), %rax
    movq    %rax, -48(%rbp)
    movq    -8(%rbp), %rax
    addq    -24(%rbp), %rax
    movq    %rax, -56(%rbp)
    movq    -56(%rbp), %rax
    addq    -40(%rbp), %rax
    movq    %rax, -64(%rbp)
    movq    -64(%rbp), %rax
    #epilogue
    popq %rbp
    ret
