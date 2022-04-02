.globl    main
 main: 
    # prologue
    pushq %rbp
    movq %rsp, %rbp

    #body
 	 movq	$5, -12(%rbp)
	 movq   -12(%rbp), %rax
	 movq   %rax, -4(%rbp)
 	 movq	-4(%rbp),		%rax
 	 negl	%rax
 	 movq	%rax, -16(%rbp)
	 movq   -16(%rbp), %rax
	 movq   %rax, -8(%rbp)
 	 movq	-8(%rbp), %rax
    #epilogue
    popq %rbp
    ret
