.globl    main
 main: 
    #prologue
    pushq %rbp
    movq %rsp, %rbp
    movq    $2, -24(%rbp)
    movq    -8(%rbp), %rax
    movq    -24(%rbp), %r10
    movq    %r10, (%rax)
    movq    -8(%rbp), %rax
    movq    $2, -32(%rbp)
    movq    -16(%rbp), %rax
    movq    -32(%rbp), %r10
    movq    %r10, (%rax)
    movq    -16(%rbp), %rax
    #epilogue
    popq %rbp
    ret
