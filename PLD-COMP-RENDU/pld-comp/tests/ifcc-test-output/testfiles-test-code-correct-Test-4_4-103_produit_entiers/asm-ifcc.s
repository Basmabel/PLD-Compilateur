.globl    _main
 _main: 
    # prologue
    pushq %rbp
    movq %rsp, %rbp

    #body
 	 movl	$1, -4(%rbp)
 	 movl	$2, -8(%rbp)
 	 movl	$3, -12(%rbp)
 	 movl  -12(%rbp), %eax
 	 imul	-8(%rbp), %eax
 	 movl	%eax, -16(%rbp)
 	 movl	$4, -20(%rbp)
 	 movl  -20(%rbp), %eax
 	 imul	-16(%rbp), %eax
 	 movl	%eax, -24(%rbp)
 	 movl	-24(%rbp), %eax
    #epilogue
    popq %rbp
    ret
