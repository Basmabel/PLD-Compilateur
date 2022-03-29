.globl    main
 main: 
    # prologue
    pushq %rbp
    movq %rsp, %rbp

    #body
 	 movl	$6, -12(%rbp)
	 movl   -12(%rbp), %eax
	 movl   %eax, -4(%rbp)
 	 movl	$5, -16(%rbp)
	 movl   -16(%rbp), %eax
	 movl   %eax, -8(%rbp)
 	 movl  -4(%rbp), %eax
 	 subl	-8(%rbp), %eax
 	 movl	%eax, -20(%rbp)
 	 movl	-20(%rbp), %eax
    #epilogue
    popq %rbp
    ret
