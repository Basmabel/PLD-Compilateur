.globl    main
 main: 
    #prologue
    pushq %rbp
    movq %rsp, %rbp
    movl    $2, -4(%rbp)
    movl    $1, -8(%rbp)
    movl    -4(%rbp), %eax
    cltd
 	 idivl    -8(%rbp)
    movl    %eax, -12(%rbp)
    movl    -12(%rbp), %eax
    #epilogue
    popq %rbp
    ret
