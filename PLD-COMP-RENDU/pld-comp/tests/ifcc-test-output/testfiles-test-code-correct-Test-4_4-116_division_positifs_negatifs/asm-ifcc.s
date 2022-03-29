.globl    _main
 _main: 
    # prologue
    pushq %rbp
    movq %rsp, %rbp

    #body
 	 movl	$9, -4(%rbp)
 	 movl	-4(%rbp),		%eax
 	 negl	%eax
 	 movl	%eax, -8(%rbp)
 	 movl	$3, -12(%rbp)
 	 movl  -8(%rbp), %eax
 	 cltd
 	 idivl	-12(%rbp)
 	 movl	%eax, -16(%rbp)
 	 movl	-16(%rbp), %eax
    #epilogue
    popq %rbp
    ret
