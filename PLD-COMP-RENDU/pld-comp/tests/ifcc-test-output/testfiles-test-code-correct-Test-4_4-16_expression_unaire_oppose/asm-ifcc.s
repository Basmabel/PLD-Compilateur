.globl    main
 main: 
    #prologue
    pushq %rbp
    movq %rsp, %rbp
    movl    $5, -12(%rbp)
    movl    -12(%rbp), %eax
    movl    %eax, -4(%rbp)
 	 movl   -4(%rbp), %eax
 	 negl   %eax
 	 movl   %eax, -16(%rbp);
    movl    -16(%rbp), %eax
    movl    %eax, -8(%rbp)
    movl    -8(%rbp), %eax
    #epilogue
    popq %rbp
    ret
