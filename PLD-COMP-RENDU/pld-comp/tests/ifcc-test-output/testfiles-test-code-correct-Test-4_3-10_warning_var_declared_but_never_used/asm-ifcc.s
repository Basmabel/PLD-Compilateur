.globl    _main
 _main: 
    # prologue
    pushq %rbp
    movq %rsp, %rbp

    #body
 	 movl	$5, -12(%rbp)
	 movl   -12(%rbp), %eax
	 movl   %eax, -4(%rbp)
 	 movl	-4(%rbp), %eax
    #epilogue
    popq %rbp
    ret
