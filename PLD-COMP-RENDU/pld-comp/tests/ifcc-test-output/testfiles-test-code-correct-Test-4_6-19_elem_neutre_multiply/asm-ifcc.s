.globl    main
 main: 
    #prologue
    pushq %rbp
    movq %rsp, %rbp
    movl    $6, -12(%rbp)
    movl    -12(%rbp), %eax
    movl    %eax, -4(%rbp)
    movl    $1, -16(%rbp)
    movl    $5, -20(%rbp)
    movl    -20(%rbp), %eax
    imul    -16(%rbp), %eax
    movl    %eax, -24(%rbp)
    movl    -24(%rbp), %eax
    addl    -4(%rbp), %eax
    movl    %eax, -28(%rbp)
    movl    -28(%rbp), %eax
    movl    %eax, -8(%rbp)
    movl    -4(%rbp), %eax
    #epilogue
    popq %rbp
    ret
