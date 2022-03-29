.globl    _main
 _main: 
    # prologue
    pushq %rbp
    movq %rsp, %rbp

    #body
 	 movl	$2, -4(%rbp)
 	 movl	$1, -8(%rbp)
 	 movl	-8(%rbp),		%eax
 	 negl	%eax
 	 movl	%eax, -12(%rbp)
 	 movl  -4(%rbp), %eax
 	 subl	-12(%rbp), %eax
 	 movl	%eax, -16(%rbp)
 	 movl	-16(%rbp), %eax
    #epilogue
    popq %rbp
    ret
