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
    movl    %eax, -8(%rbp)
    movl    $3, -28(%rbp)
    movl    -28(%rbp), %eax
    movl    %eax, -12(%rbp)
    movl    $4, -32(%rbp)
    movl    -32(%rbp), %eax
    movl    %eax, -16(%rbp)
    movl    -8(%rbp), %eax
    subl    -4(%rbp), %eax
    movl    %eax, -40(%rbp)
    movl    -16(%rbp), %eax
    subl    -12(%rbp), %eax
    movl    %eax, -44(%rbp)
    movl    -40(%rbp), %eax
    cltd
 	 idivl    -44(%rbp)
    movl    %eax, -48(%rbp)
    movl    -48(%rbp), %eax
    movl    %eax, -36(%rbp)
    movl    -36(%rbp), %eax
    #epilogue
    popq %rbp
    ret
