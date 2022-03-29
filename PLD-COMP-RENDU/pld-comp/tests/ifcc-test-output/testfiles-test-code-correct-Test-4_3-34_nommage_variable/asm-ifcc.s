.globl    main
 main: 
    # prologue
    pushq %rbp
    movq %rsp, %rbp

    #body
 	 movl	$2, -16(%rbp)
 	 movl  -4(%rbp), %eax
 	 imul	-16(%rbp), %eax
 	 movl	%eax, -20(%rbp)
 	 movl  -20(%rbp), %eax
 	 addl	-12(%rbp), %eax
 	 movl	%eax, -24(%rbp)
 	 movl	$2, -28(%rbp)
 	 movl  -24(%rbp), %eax
 	 addl	-28(%rbp), %eax
 	 movl	%eax, -32(%rbp)
	 movl   -32(%rbp), %eax
	 movl   %eax, -12(%rbp)
 	 movl	-4(%rbp), %eax
    #epilogue
    popq %rbp
    ret
