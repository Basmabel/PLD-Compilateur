.globl    main
 main: 
    # prologue
    pushq %rbp
    movq %rsp, %rbp

    #body
 	 movq	$5, -12(%rbp)
	 movq   -12(%rbp), %rax
	 movq   %rax, -4(%rbp)
 	 movq	$4, -16(%rbp)
 	 movq	$8, -20(%rbp)
 	 movq  -20(%rbp), %rax
 	 cltd
 	 idivl	-4(%rbp)
 	 movq	%rax, -24(%rbp)
 	 movq	$5, -28(%rbp)
 	 movq  -28(%rbp), %rax
 	 imul	-24(%rbp), %rax
 	 movq	%rax, -32(%rbp)
 	 movq  -32(%rbp), %rax
 	 addl	-16(%rbp), %rax
 	 movq	%rax, -36(%rbp)
 	 movq	$9, -40(%rbp)
 	 movq  -40(%rbp), %rax
 	 subl	-36(%rbp), %rax
 	 movq	%rax, -44(%rbp)
	 movq   -44(%rbp), %rax
	 movq   %rax, -8(%rbp)
 	 movq	-8(%rbp), %rax
    #epilogue
    popq %rbp
    ret
