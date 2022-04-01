.globl    main
 main: 
    #prologue
    pushq %rbp
    movq %rsp, %rbp
    movl    $3, -12(%rbp)
    movl    -12(%rbp), %eax
    movl    %eax, -4(%rbp)
    movl    $5, -16(%rbp)
    movl    -16(%rbp), %eax
    movl    %eax, -8(%rbp)
    movl    $12, -24(%rbp)
    movl    -4(%rbp), %eax
    addl    -24(%rbp), %eax
    movl    %eax, -28(%rbp)
    movl    -28(%rbp), %eax
    cltd
 	 idivl    -8(%rbp)
    movl    %eax, -32(%rbp)
    movl    -32(%rbp), %eax
    movl    %eax, -20(%rbp)
    movl    -20(%rbp), %eax
    #epilogue
    popq %rbp
    ret
