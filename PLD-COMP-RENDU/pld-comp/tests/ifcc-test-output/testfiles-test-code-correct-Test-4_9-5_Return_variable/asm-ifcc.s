.globl    test
 test: 
    #prologue
    pushq %rbp
    movq %rsp, %rbp
    movq    -4(%rbp), %rax
    #epilogue
    popq %rbp
    ret
.globl    main
 main: 
    #prologue
    pushq %rbp
    movq %rsp, %rbp
    movq    $8, -16(%rbp)
    movq    -16(%rbp), %rax
    movq    %rax, -4(%rbp)
    movq    $4, -20(%rbp)
    movq    $5, -24(%rbp)
    movq    -20(%rbp), %rax
    addq    -24(%rbp), %rax
    movq    %rax, -28(%rbp)
    movq    -28(%rbp), %rax
    movq    %rax, -8(%rbp)
    movq    $2, -36(%rbp)
    movq    32(%rbp), %r8
    movq    36(%rbp), %rdi
    movq    %r8, %r9
    movq    %rdi, %r8
    movq    %rax, %rdi
    call    test
    movq    -32(%rbp), %rax
    movq    %rax, -12(%rbp)
    movq    -4(%rbp), %rax
    #epilogue
    popq %rbp
    ret
