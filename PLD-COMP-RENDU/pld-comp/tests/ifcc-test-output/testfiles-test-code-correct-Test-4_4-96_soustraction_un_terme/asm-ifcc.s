.globl    main
 main: 
    #prologue
    pushq %rbp
    movq %rsp, %rbp
    movl    $2, -4(%rbp)
 	 movl   -4(%rbp), %eax
 	 negl   %eax
 	 movl   %eax, -8(%rbp);
    movl    -8(%rbp), %eax
    #epilogue
    popq %rbp
    ret
