.globl    main
 main: 
    # prologue
    pushq %rbp
    movq %rsp, %rbp

    #body
 	 movl	$5, -4(%rbp)
 	 movl	$10, -8(%rbp)
 	 movl	$2, -12(%rbp)
 	 movl  -12(%rbp), %eax
 	 imul	-8(%rbp), %eax
 	 movl	%eax, -16(%rbp)
 	 movl	$6, -20(%rbp)
 	 movl	$3, -24(%rbp)
 	 movl  -20(%rbp), %eax
 	 cltd
 	 idivl	-24(%rbp)
 	 movl	%eax, -28(%rbp)
 	 movl  -16(%rbp), %eax
 	 addl	-28(%rbp), %eax
 	 movl	%eax, -32(%rbp)
 	 movl  -32(%rbp), %eax
 	 imul	-4(%rbp), %eax
 	 movl	%eax, -36(%rbp)
 	 movl	$2, -40(%rbp)
 	 movl  -36(%rbp), %eax
 	 cltd
 	 idivl	-40(%rbp)
 	 movl	%eax, -44(%rbp)
 	 movl	-44(%rbp), %eax
    #epilogue
    popq %rbp
    ret
