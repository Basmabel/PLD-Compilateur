.globl    _main
 _main: 
    # prologue
    pushq %rbp
    movq %rsp, %rbp

    #body
 	 movl	$4, -20(%rbp)
	 movl   -20(%rbp), %eax
	 movl   %eax, -4(%rbp)
 	 movl	$1, -24(%rbp)
	 movl   -24(%rbp), %eax
	 movl   %eax, -8(%rbp)
 	 movl	$3, -28(%rbp)
	 movl   -28(%rbp), %eax
	 movl   %eax, -12(%rbp)
 	 movl	$10, -32(%rbp)
 	 movl  -4(%rbp), %eax
 	 addl	-8(%rbp), %eax
 	 movl	%eax, -36(%rbp)
 	 movl  -36(%rbp), %eax
 	 imul	-32(%rbp), %eax
 	 movl	%eax, -40(%rbp)
 	 movl	$3, -44(%rbp)
 	 movl  -12(%rbp), %eax
 	 imul	-44(%rbp), %eax
 	 movl	%eax, -48(%rbp)
 	 movl	$20, -52(%rbp)
 	 movl  -52(%rbp), %eax
 	 imul	-48(%rbp), %eax
 	 movl	%eax, -56(%rbp)
 	 movl	$5, -60(%rbp)
 	 movl  -56(%rbp), %eax
 	 addl	-60(%rbp), %eax
 	 movl	%eax, -64(%rbp)
 	 movl  -40(%rbp), %eax
 	 cltd
 	 idivl	-64(%rbp)
 	 movl	%eax, -68(%rbp)
	 movl   -68(%rbp), %eax
	 movl   %eax, -16(%rbp)
 	 movl	-16(%rbp), %eax
    #epilogue
    popq %rbp
    ret
