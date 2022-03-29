.globl    main
 main: 
    # prologue
    pushq %rbp
    movq %rsp, %rbp

    #body
 	 movl	$5, -12(%rbp)
	 movl   -12(%rbp), %eax
	 movl   %eax, -4(%rbp)
 	 movl	$4, -16(%rbp)
 	 movl	$8, -20(%rbp)
 	 movl  -20(%rbp), %eax
 	 cltd
 	 idivl	-4(%rbp)
 	 movl	%eax, -24(%rbp)
 	 movl	$5, -28(%rbp)
 	 movl  -28(%rbp), %eax
 	 imul	-24(%rbp), %eax
 	 movl	%eax, -32(%rbp)
 	 movl  -16(%rbp), %eax
 	 addl	-32(%rbp), %eax
 	 movl	%eax, -36(%rbp)
 	 movl	$9, -40(%rbp)
 	 movl  -36(%rbp), %eax
 	 subl	-40(%rbp), %eax
 	 movl	%eax, -44(%rbp)
	 movl   -44(%rbp), %eax
	 movl   %eax, -8(%rbp)
 	 movl	-8(%rbp), %eax
    #epilogue
    popq %rbp
    ret
