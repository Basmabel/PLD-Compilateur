.globl    _main
 _main: 
    # prologue
    pushq %rbp
    movq %rsp, %rbp

    #body
 	 movl	$4, -24(%rbp)
	 movl   -24(%rbp), %eax
	 movl   %eax, -4(%rbp)
 	 movl	$4, -28(%rbp)
	 movl   -28(%rbp), %eax
	 movl   %eax, -8(%rbp)
 	 movl	$6, -32(%rbp)
	 movl   -32(%rbp), %eax
	 movl   %eax, -12(%rbp)
 	 movl	$1, -36(%rbp)
	 movl   -36(%rbp), %eax
	 movl   %eax, -16(%rbp)
