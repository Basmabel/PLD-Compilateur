.globl    main
 main: 
    #prologue
    pushq %rbp
    movq %rsp, %rbp
    movq    $23, -8(%rbp)
    movq    -16(%rbp), %rax
    movq    -8(%rbp), %r10
    movq    %r10, (%rax)
    movq    $43, -24(%rbp)
    movq    -32(%rbp), %rax
    movq    -24(%rbp), %r10
    movq    %r10, (%rax)
    movq    -16(%rbp), %rax
    addq    -32(%rbp), %rax
    movq    %rax, -40(%rbp)
    movq    -48(%rbp), %rax
    movq    -40(%rbp), %r10
    movq    %r10, (%rax)
    movq    -48(%rbp), %rax
    #epilogue
    popq %rbp
    ret
