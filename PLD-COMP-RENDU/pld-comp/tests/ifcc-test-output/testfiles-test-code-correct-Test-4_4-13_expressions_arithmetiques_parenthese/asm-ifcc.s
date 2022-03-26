.globl    main
 main: 
    # prologue
    pushq %rbp
    movq %rsp, %rbp

    #body
 	 movl	$5, -12(%rbp)
	 movl   -12(%rbp), %eax
	 movl   %eax, -4(%rbp)
 	 movl	$7, -16(%rbp)
 	 movl	$6, -20(%rbp)
 	 movl	$5, -24(%rbp)
 	 movl  -4(%rbp), %eax
 	 addl	-24(%rbp), %eax
 	 movl	%eax, -28(%rbp)
 	 movl  -28(%rbp), %eax
 	 imul	-20(%rbp), %eax
 	 movl	%eax, -32(%rbp)
 	 movl  -16(%rbp), %eax
 	 addl	-32(%rbp), %eax
 	 movl	%eax, -36(%rbp)
	 movl   -36(%rbp), %eax
	 movl   %eax, -8(%rbp)
 	 movl	-8(%rbp), %eax
    #epilogue
    popq %rbp
    ret
