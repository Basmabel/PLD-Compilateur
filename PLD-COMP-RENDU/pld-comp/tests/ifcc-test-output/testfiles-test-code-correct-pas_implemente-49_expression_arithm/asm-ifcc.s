.globl    main
 main: 
    #prologue
    pushq %rbp
    movq %rsp, %rbp
    movl    $1, -20(%rbp)
    movl    -20(%rbp), %eax
    movl    %eax, -4(%rbp)
    movl    $2, -24(%rbp)
    movl    -24(%rbp), %eax
    imul    -4(%rbp), %eax
    movl    %eax, -28(%rbp)
    movl    -28(%rbp), %eax
    movl    %eax, -8(%rbp)
    movl    $3, -32(%rbp)
    movl    -8(%rbp), %eax
    subl    -32(%rbp), %eax
    movl    %eax, -36(%rbp)
    movl    -36(%rbp), %eax
    movl    %eax, -12(%rbp)
    movl    $4, -40(%rbp)
    movl    -16(%rbp), %eax
    addl    -40(%rbp), %eax
    movl    %eax, -44(%rbp)
    movl    -44(%rbp), %eax
    movl    %eax, -16(%rbp)
    movl    -16(%rbp), %eax
    #epilogue
    popq %rbp
    ret
