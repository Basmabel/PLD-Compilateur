.globl    main
 main: 
    # prologue
    pushq %rbp
    movq %rsp, %rbp

    #body
 	 movl	$5, -16(%rbp)
	 movl   -16(%rbp), %eax
	 movl   %eax, -4(%rbp)
 	 movl	$4, -20(%rbp)
 	 movl  -20(%rbp), %eax
 	 addl	-4(%rbp), %eax
 	 movl	%eax, -24(%rbp)
	 movl   -24(%rbp), %eax
	 movl   %eax, -8(%rbp)
 	 movl  -4(%rbp), %eax
 	 cltd
 	 idivl	-8(%rbp)
 	 movl	%eax, -28(%rbp)
	 movl   -28(%rbp), %eax
	 movl   %eax, -12(%rbp)
 	 movl	-12(%rbp), %eax
    #epilogue
    popq %rbp
    ret
