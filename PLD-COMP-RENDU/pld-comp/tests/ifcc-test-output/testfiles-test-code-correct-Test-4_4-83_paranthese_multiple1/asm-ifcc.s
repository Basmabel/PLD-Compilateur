.globl    main
 main: 
    # prologue
    pushq %rbp
    movq %rsp, %rbp

    #body
 	 movl	$10, -4(%rbp)
 	 movl	$2, -8(%rbp)
 	 movl  -8(%rbp), %eax
 	 imul	-4(%rbp), %eax
 	 movl	%eax, -12(%rbp)
 	 movl	$10, -16(%rbp)
 	 movl	$5, -20(%rbp)
 	 movl  -16(%rbp), %eax
 	 cltd
 	 idivl	-20(%rbp)
 	 movl	%eax, -24(%rbp)
 	 movl  -12(%rbp), %eax
 	 addl	-24(%rbp), %eax
 	 movl	%eax, -28(%rbp)
 	 movl	-28(%rbp), %eax
    #epilogue
    popq %rbp
    ret
