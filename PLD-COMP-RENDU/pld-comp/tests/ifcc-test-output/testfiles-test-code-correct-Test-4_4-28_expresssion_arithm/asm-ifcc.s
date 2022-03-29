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
	 movl   -16(%rbp), %eax
	 movl   %eax, -8(%rbp)
 	 movl	$2, -24(%rbp)
 	 movl  -24(%rbp), %eax
 	 imul	-8(%rbp), %eax
 	 movl	%eax, -28(%rbp)
 	 movl  -4(%rbp), %eax
 	 addl	-28(%rbp), %eax
 	 movl	%eax, -32(%rbp)
 	 movl	$5, -36(%rbp)
 	 movl  -36(%rbp), %eax
 	 imul	-4(%rbp), %eax
 	 movl	%eax, -40(%rbp)
 	 movl	$3, -44(%rbp)
 	 movl  -40(%rbp), %eax
 	 addl	-44(%rbp), %eax
 	 movl	%eax, -48(%rbp)
 	 movl  -32(%rbp), %eax
 	 cltd
 	 idivl	-48(%rbp)
 	 movl	%eax, -52(%rbp)
	 movl   -52(%rbp), %eax
	 movl   %eax, -20(%rbp)
 	 movl	-20(%rbp), %eax
    #epilogue
    popq %rbp
    ret
