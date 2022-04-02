.globl    main
 main: 
    # prologue
    pushq %rbp
    movq %rsp, %rbp

    #body
 	 movq	$6, -12(%rbp)
	 movq   -12(%rbp), %rax
	 movq   %rax, -4(%rbp)
 	 movq	$1, -16(%rbp)
 	 movq	$5, -20(%rbp)
 	 movq  -4(%rbp), %rax
 	 addl	-20(%rbp), %rax
 	 movq	%rax, -24(%rbp)
	 movq   -24(%rbp), %rax
	 movq   %rax, -8(%rbp)
 	 movq	-4(%rbp), %rax
    #epilogue
    popq %rbp
    ret
