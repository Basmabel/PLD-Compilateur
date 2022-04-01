.globl    test
 test: 
    #prologue
    pushq %rbp
    movq %rsp, %rbp
    movl    -4(%rbp), %eax
    #epilogue
    popq %rbp
    ret
.globl    main
 main: 
    #prologue
    pushq %rbp
    movq %rsp, %rbp
    movl    $6, -16(%rbp)
    movl    -16(%rbp), %eax
    movl    %eax, -4(%rbp)
    movl    $4, -20(%rbp)
    movl    $5, -24(%rbp)
    movl    -20(%rbp), %eax
    addl    -24(%rbp), %eax
    movl    %eax, -28(%rbp)
    movl    -28(%rbp), %eax
    movl    %eax, -8(%rbp)
    movl    $2, -36(%rbp)
    movl    32(%rbp), %r8d
    movl    36(%rbp), %edi
    movl    %r8d, %r9d
    movl    %edi, %r8d
    movl    %eax, %edi
    call    test
    movl    -32(%rbp), %eax
    movl    %eax, -12(%rbp)
    movl    $2, -40(%rbp)
    movl    -40(%rbp), %eax
    #epilogue
    popq %rbp
    ret
