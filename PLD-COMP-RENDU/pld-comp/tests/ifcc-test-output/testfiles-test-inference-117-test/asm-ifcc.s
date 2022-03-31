.globl    main
 main: 
    #prologue
    pushq %rbp
    movq %rsp, %rbp
    movq    $97, -40(%rbp)
    movq    -40(%rbp), %rax
    movq    %rax, -8(%rbp)
    movq    $98, -48(%rbp)
    movq    -48(%rbp), %rax
    movq    %rax, -16(%rbp)
    movq    $3, -56(%rbp)
    movq    -56(%rbp), %rax
    movq    %rax, -32(%rbp)
    movq    -8(%rbp), %rax
    addq    -16(%rbp), %rax
    movq    %rax, -64(%rbp)
    movq    -64(%rbp), %rax
    addq    -32(%rbp), %rax
    movq    %rax, -72(%rbp)
    movq    -72(%rbp), %rax
    movq    %rax, -24(%rbp)
    movq    -24(%rbp), %rax
    #epilogue
    popq %rbp
    ret
