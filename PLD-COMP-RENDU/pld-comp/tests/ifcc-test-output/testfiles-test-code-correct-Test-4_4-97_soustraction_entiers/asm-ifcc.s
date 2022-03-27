.globl    main
 main: 
    # prologue
    pushq %rbp
    movq %rsp, %rbp

    #body
 	 movl	$10, -4(%rbp)
 	 movl	$2, -8(%rbp)
 	 movl  -4(%rbp), %eax
 	 subl	-8(%rbp), %eax
 	 movl	%eax, -12(%rbp)
 	 movl	$3, -16(%rbp)
 	 movl  -12(%rbp), %eax
 	 subl	-16(%rbp), %eax
 	 movl	%eax, -20(%rbp)
 	 movl	$1, -24(%rbp)
 	 movl  -20(%rbp), %eax
 	 subl	-24(%rbp), %eax
 	 movl	%eax, -28(%rbp)
 	 movl	-28(%rbp), %eax
    #epilogue
    popq %rbp
    ret
