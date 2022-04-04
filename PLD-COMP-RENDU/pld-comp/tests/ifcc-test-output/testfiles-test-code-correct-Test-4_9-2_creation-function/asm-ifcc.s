.globl    test
 test: 
    #prologue
    pushq %rbp
    movq %rsp, %rbp
    movq    %rdi, -8(%rbp)
    movq    $2, -16(%rbp)
    movq    -16(%rbp), %rax
    #epilogue
    popq %rbp
    ret
.globl    main
 main: 
    #prologue
    pushq %rbp
    movq %rsp, %rbp
    subq   $72, %rsp
    movq    $6, -24(%rbp)
    movq    $-8, -32(%rbp)
    movq    %rbp, %rax
    addq    -32(%rbp), %rax
    movq    %rax, -32(%rbp)
    movq    -32(%rbp), %rax
    movq    -24(%rbp), %r10
    movq    %r10, (%rax)
    movq    $4, -40(%rbp)
    movq    $5, -48(%rbp)
    movq    -40(%rbp), %rax
    addq    -48(%rbp), %rax
    movq    %rax, -56(%rbp)
    movq    $-16, -64(%rbp)
    movq    %rbp, %rax
    addq    -64(%rbp), %rax
    movq    %rax, -64(%rbp)
    movq    -64(%rbp), %rax
    movq    -56(%rbp), %r10
    movq    %r10, (%rax)
    movq    -8(%rbp), %rax
    #epilogue
    leave
    ret
