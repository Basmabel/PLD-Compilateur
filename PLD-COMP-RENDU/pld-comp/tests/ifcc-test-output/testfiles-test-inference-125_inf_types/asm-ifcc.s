.globl    main
 main: 
    #prologue
    pushq %rbp
    movq %rsp, %rbp
    movq    $1, -16(%rbp)
    movq    -16(%rbp), %rax
    movq    %rax, -8(%rbp)
    movq    $2, -32(%rbp)
    movq    -32(%rbp), %rax
    movq    %rax, -24(%rbp)
    movq    $3, -48(%rbp)
    movq    -48(%rbp), %rax
    movq    %rax, -40(%rbp)
    movq    $4, -64(%rbp)
    movq    -64(%rbp), %rax
    movq    %rax, -56(%rbp)
    movq    -8(%rbp), %rax
    addq    -24(%rbp), %rax
    movq    %rax, -80(%rbp)
    movq    -80(%rbp), %rax
    addq    -40(%rbp), %rax
    movq    %rax, -88(%rbp)
    movq    -88(%rbp), %rax
    addq    -56(%rbp), %rax
    movq    %rax, -96(%rbp)
    movq    -96(%rbp), %rax
    movq    %rax, -72(%rbp)
    movq    -72(%rbp), %rax
    #epilogue
    popq %rbp
    ret
