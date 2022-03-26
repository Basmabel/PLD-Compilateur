.globl    main
 main: 
    # prologue
    pushq %rbp
    movq %rsp, %rbp

    #body
 	 movl	$5, -4(%rbp)
 	 movl	$3, -8(%rbp)
 	 movl	$1, -12(%rbp)
 	 movl  -8(%rbp), %eax
 	 subl	-12(%rbp), %eax
 	 movl	%eax, -16(%rbp)
 	 movl  -4(%rbp), %eax
 	 subl	-16(%rbp), %eax
 	 movl	%eax, -20(%rbp)
 	 movl	-20(%rbp), %eax
    #epilogue
    popq %rbp
    ret
