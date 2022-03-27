.globl    main
 main: 
    # prologue
    pushq %rbp
    movq %rsp, %rbp

    #body
 	 movl	$6, -8(%rbp)
	 movl   -8(%rbp), %eax
	 movl   %eax, -4(%rbp)
 	 movl	$6, -16(%rbp)
	 movl   -16(%rbp), %eax
	 movl   %eax, -12(%rbp)
