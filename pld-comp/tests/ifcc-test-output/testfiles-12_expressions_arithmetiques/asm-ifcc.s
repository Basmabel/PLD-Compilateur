.globl    main
 main: 
    # prologue
    pushq %rbp
    movq %rsp, %rbp

    #body
 	 movq	$5, -16(%rbp)
	 movq   -16(%rbp), %rax
	 movq   %rax, -4(%rbp)
 	 movq	$4, -20(%rbp)
 	 movq  -4(%rbp), %rax
 	 addl	-20(%rbp), %rax
 	 movq	%rax, -24(%rbp)
	 movq   -24(%rbp), %rax
	 movq   %rax, -8(%rbp)
 	 movq  -4(%rbp), %rax
 	 cltd
 	 idivl	-8(%rbp)
 	 movq	%rax, -28(%rbp)
	 movq   -28(%rbp), %rax
	 movq   %rax, -12(%rbp)
 	 movq	-12(%rbp), %rax
    #epilogue
    popq %rbp
    ret
