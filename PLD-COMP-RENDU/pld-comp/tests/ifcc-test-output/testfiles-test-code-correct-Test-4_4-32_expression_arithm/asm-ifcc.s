.globl    _main
 _main: 
    # prologue
    pushq %rbp
    movq %rsp, %rbp

    #body
 	 movl	$1, -8(%rbp)
	 movl   -8(%rbp), %eax
	 movl   %eax, -4(%rbp)
 	 movl	$4, -12(%rbp)
 	 movl  -12(%rbp), %eax
 	 imul	-4(%rbp), %eax
 	 movl	%eax, -16(%rbp)
 	 movl	$5, -20(%rbp)
 	 movl  -16(%rbp), %eax
 	 addl	-20(%rbp), %eax
 	 movl	%eax, -24(%rbp)
 	 movl	$3, -28(%rbp)
 	 movl  -24(%rbp), %eax
 	 cltd
 	 idivl	-28(%rbp)
 	 movl	%eax, -32(%rbp)
 	 movl	$2, -36(%rbp)
 	 movl  -32(%rbp), %eax
 	 addl	-36(%rbp), %eax
 	 movl	%eax, -40(%rbp)
	 movl   -40(%rbp), %eax
	 movl   %eax, -4(%rbp)
 	 movl	-4(%rbp), %eax
    #epilogue
    popq %rbp
    ret
