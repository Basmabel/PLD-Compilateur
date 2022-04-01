.globl    main
 main: 
    #prologue
    pushq %rbp
    movq %rsp, %rbp
    movl    $1, -16(%rbp)
    movl    -16(%rbp), %eax
    movl    %eax, -4(%rbp)
    movl    $2, -20(%rbp)
    movl    -20(%rbp), %eax
    movl    %eax, -8(%rbp)
    movl    $3, -24(%rbp)
    movl    -24(%rbp), %eax
    movl    %eax, -12(%rbp)
    movl    $4, -32(%rbp)
    movl    -32(%rbp), %eax
    imul    -4(%rbp), %eax
    movl    %eax, -36(%rbp)
    movl    $5, -40(%rbp)
    movl    -36(%rbp), %eax
    addl    -40(%rbp), %eax
    movl    %eax, -44(%rbp)
    movl    -12(%rbp), %eax
    imul    -8(%rbp), %eax
    movl    %eax, -48(%rbp)
    movl    -44(%rbp), %eax
    addl    -48(%rbp), %eax
    movl    %eax, -52(%rbp)
    movl    -52(%rbp), %eax
    movl    %eax, -28(%rbp)
    movl    -28(%rbp), %eax
    #epilogue
    popq %rbp
    ret
