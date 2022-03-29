.globl    _main
 _main: 
    # prologue
    pushq %rbp
    movq %rsp, %rbp

    #body
 	 movl	$2, -4(%rbp)
 	 movl	-4(%rbp),		%eax
 	 negl	%eax
 	 movl	%eax, -8(%rbp)
 	 movl	$3, -12(%rbp)
 	 movl  -12(%rbp), %eax
 	 imul	-8(%rbp), %eax
 	 movl	%eax, -16(%rbp)
 	 movl	-16(%rbp), %eax
    #epilogue
    popq %rbp
    ret
