.globl    main
 main: 
    # prologue
    pushq %rbp
    movq %rsp, %rbp

    #body
 	 movq	$5, -12(%rbp)
	 movq   -12(%rbp), %rax
	 movq   %rax, -4(%rbp)
 	 movq	$7, -16(%rbp)
 	 movq	$6, -20(%rbp)
 	 movq	$5, -24(%rbp)
 	 movq  -24(%rbp), %rax
 	 addl	-4(%rbp), %rax
 	 movq	%rax, -28(%rbp)
 	 movq  -28(%rbp), %rax
 	 imul	-20(%rbp), %rax
 	 movq	%rax, -32(%rbp)
 	 movq  -32(%rbp), %rax
 	 addl	-16(%rbp), %rax
 	 movq	%rax, -36(%rbp)
	 movq   -36(%rbp), %rax
	 movq   %rax, -8(%rbp)
 	 movq	-8(%rbp), %rax
    #epilogue
    popq %rbp
    ret
