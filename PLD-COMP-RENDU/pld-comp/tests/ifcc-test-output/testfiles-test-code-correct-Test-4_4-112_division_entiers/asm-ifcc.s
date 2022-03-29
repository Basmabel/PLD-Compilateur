.globl    _main
 _main: 
    # prologue
    pushq %rbp
    movq %rsp, %rbp

    #body
 	 movl	$24, -4(%rbp)
 	 movl	$2, -8(%rbp)
 	 movl  -4(%rbp), %eax
 	 cltd
 	 idivl	-8(%rbp)
 	 movl	%eax, -12(%rbp)
 	 movl	$3, -16(%rbp)
 	 movl  -12(%rbp), %eax
 	 cltd
 	 idivl	-16(%rbp)
 	 movl	%eax, -20(%rbp)
 	 movl	$4, -24(%rbp)
 	 movl  -20(%rbp), %eax
 	 cltd
 	 idivl	-24(%rbp)
 	 movl	%eax, -28(%rbp)
 	 movl	-28(%rbp), %eax
    #epilogue
    popq %rbp
    ret
