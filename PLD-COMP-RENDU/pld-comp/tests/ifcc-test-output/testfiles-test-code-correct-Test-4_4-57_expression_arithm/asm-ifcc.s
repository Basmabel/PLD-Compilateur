.globl    main
 main: 
    # prologue
    pushq %rbp
    movq %rsp, %rbp

    #body
 	 movl	$2, -20(%rbp)
	 movl   -20(%rbp), %eax
	 movl   %eax, -4(%rbp)
 	 movl	$6, -24(%rbp)
	 movl   -24(%rbp), %eax
	 movl   %eax, -8(%rbp)
 	 movl	$5, -28(%rbp)
	 movl   -28(%rbp), %eax
	 movl   %eax, -12(%rbp)
 	 movl  -4(%rbp), %eax
 	 addl	-8(%rbp), %eax
 	 movl	%eax, -32(%rbp)
 	 movl  -32(%rbp), %eax
 	 cltd
 	 idivl	-12(%rbp)
 	 movl	%eax, -36(%rbp)
	 movl   -36(%rbp), %eax
	 movl   %eax, -16(%rbp)
 	 movl	-16(%rbp), %eax
    #epilogue
    popq %rbp
    ret
