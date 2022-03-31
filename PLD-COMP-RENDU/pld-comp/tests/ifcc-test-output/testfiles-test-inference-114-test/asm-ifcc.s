.globl    main
 main: 
    #prologue
    pushq %rbp
    movq %rsp, %rbp
    movq    $97, -24(%rbp)
    movq    -24(%rbp), %rax
    movq    %rax, -8(%rbp)
    movq    $98, -32(%rbp)
    movq    -32(%rbp), %rax
    movq    %rax, -16(%rbp)
    movq    $99, -48(%rbp)
    movq    -48(%rbp), %rax
    addq    -8(%rbp), %rax
    movq    %rax, -56(%rbp)
    movq    -56(%rbp), %rax
    addq    -16(%rbp), %rax
    movq    %rax, -64(%rbp)
    movq    -64(%rbp), %rax
    movq    %rax, -40(%rbp)
    movq    -40(%rbp), %rax
    #epilogue
    popq %rbp
    ret
