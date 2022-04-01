.globl    main
 main: 
    #prologue
    pushq %rbp
    movq %rsp, %rbp
    movl    $1, -4(%rbp)
    movl    $2, -8(%rbp)
    movl    -8(%rbp), %eax
    imul    -4(%rbp), %eax
    movl    %eax, -12(%rbp)
    movl    $3, -16(%rbp)
    movl    -16(%rbp), %eax
    imul    -12(%rbp), %eax
    movl    %eax, -20(%rbp)
    movl    $4, -24(%rbp)
    movl    -24(%rbp), %eax
    imul    -20(%rbp), %eax
    movl    %eax, -28(%rbp)
    movl    -28(%rbp), %eax
    #epilogue
    popq %rbp
    ret
