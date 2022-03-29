.globl    main
 main: 
    # prologue
    pushq %rbp
    movq %rsp, %rbp

    #body
 	 movl	$1, -24(%rbp)
	 movl   -24(%rbp), %eax
	 movl   %eax, -4(%rbp)
 	 movl	$2, -28(%rbp)
	 movl   -28(%rbp), %eax
	 movl   %eax, -8(%rbp)
 	 movl	$3, -32(%rbp)
	 movl   -32(%rbp), %eax
	 movl   %eax, -12(%rbp)
 	 movl	$4, -36(%rbp)
	 movl   -36(%rbp), %eax
	 movl   %eax, -16(%rbp)
 	 movl	$10, -40(%rbp)
 	 movl  -4(%rbp), %eax
 	 imul	-40(%rbp), %eax
 	 movl	%eax, -44(%rbp)
 	 movl	$2, -48(%rbp)
 	 movl  -48(%rbp), %eax
 	 imul	-44(%rbp), %eax
 	 movl	%eax, -52(%rbp)
 	 movl  -8(%rbp), %eax
 	 imul	-52(%rbp), %eax
 	 movl	%eax, -56(%rbp)
 	 movl	$2, -60(%rbp)
 	 movl  -60(%rbp), %eax
 	 imul	-12(%rbp), %eax
 	 movl	%eax, -64(%rbp)
 	 movl	$10, -68(%rbp)
 	 movl  -68(%rbp), %eax
 	 imul	-64(%rbp), %eax
 	 movl	%eax, -72(%rbp)
 	 movl  -56(%rbp), %eax
 	 addl	-72(%rbp), %eax
 	 movl	%eax, -76(%rbp)
 	 movl  -76(%rbp), %eax
 	 cltd
 	 idivl	-16(%rbp)
 	 movl	%eax, -80(%rbp)
	 movl   -80(%rbp), %eax
	 movl   %eax, -20(%rbp)
 	 movl	-20(%rbp), %eax
    #epilogue
    popq %rbp
    ret
