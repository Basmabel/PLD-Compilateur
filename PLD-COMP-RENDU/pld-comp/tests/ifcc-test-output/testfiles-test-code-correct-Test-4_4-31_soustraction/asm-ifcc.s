.globl    main
 main: 
    #prologue
    pushq %rbp
    movq %rsp, %rbp
    movq    $2, -24(%rbp)
    movq    -8(%rbp), %rax
    movq    -24(%rbp), %r10
    movq    %r10, (%rax)
    movq    $3, -32(%rbp)
    movq    -16(%rbp), %rax
    movq    -32(%rbp), %r10
    movq    %r10, (%rax)
    movq    -16(%rbp), %rax
    subq    -8(%rbp), %rax
    movq    %rax, -48(%rbp)
    movq    -40(%rbp), %rax
    movq    -48(%rbp), %r10
    movq    %r10, (%rax)
    movq    -40(%rbp), %rax
    #epilogue
    popq %rbp
    ret
