.globl    test
 test: 
    #prologue
    pushq %rbp
    movq %rsp, %rbp
    movl    $2, -8(%rbp)
    movl    -8(%rbp), %eax
    #epilogue
    popq %rbp
    ret
.globl    main
 main: 
    #prologue
    pushq %rbp
    movq %rsp, %rbp
    movl    $6, -12(%rbp)
    movl    -12(%rbp), %eax
    movl    %eax, -4(%rbp)
    movl    $4, -16(%rbp)
    movl    $5, -20(%rbp)
    movl    -16(%rbp), %eax
    addl    -20(%rbp), %eax
    movl    %eax, -24(%rbp)
    movl    -24(%rbp), %eax
    movl    %eax, -8(%rbp)
    movl    $2, -32(%rbp)
    movl    28(%rbp), %r8d
    movl    32(%rbp), %edi
    movl    %r8d, %r9d
    movl    %edi, %r8d
    movl    %eax, %edi
    call    test
    movl    $2, -36(%rbp)
    movl    -36(%rbp), %eax
    #epilogue
    popq %rbp
    ret
