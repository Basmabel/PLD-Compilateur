.globl    main
 main: 
    #prologue
    pushq %rbp
    movq %rsp, %rbp
    movl    $12, -8(%rbp)
    movl    -8(%rbp), %eax
    movl    %eax, -4(%rbp)
    movl    $6, -12(%rbp)
    movl    $2, -16(%rbp)
    movl    -12(%rbp), %eax
    cltd
 	 idivl    -16(%rbp)
    movl    %eax, -20(%rbp)
    movl    -4(%rbp), %eax
    cltd
 	 idivl    -20(%rbp)
    movl    %eax, -24(%rbp)
    movl    -24(%rbp), %eax
    #epilogue
    popq %rbp
    ret
