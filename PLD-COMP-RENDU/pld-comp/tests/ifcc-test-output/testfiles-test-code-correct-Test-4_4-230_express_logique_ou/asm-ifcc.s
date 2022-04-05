.globl    main
 main: 
    #prologue
    pushq %rbp
    movq %rsp, %rbp
    movq    $15, -24(%rbp)
    movq    -16(%rbp), %rax
    movq    -24(%rbp), %r10
    movq    %r10, (%rax)
    movq    $6, -32(%rbp)
    movq    -32(%rbp), %rax
    addq    -16(%rbp), %rax
    movq    %rax, -40(%rbp)
    movq    $32, -48(%rbp)
    movq    -40(%rbp), %rax
    orq    -48(%rbp), %rax
    movq    %rax, -56(%rbp)
    movq    -8(%rbp), %rax
    movq    -56(%rbp), %r10
    movq    %r10, (%rax)
    movq    -8(%rbp), %rax
    #epilogue
    popq %rbp
    ret
