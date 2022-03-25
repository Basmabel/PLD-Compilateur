.globl    main
 main: 
    # prologue
    pushq %rbp
    movq %rsp, %rbp

    #body
 	 movl	$8, -8(%rbp)
	 movl   -8(%rbp), %eax
	 movl   %eax, -4(%rbp)
 	 movl	-4(%rbp), %eax
    #epilogue
    popq %rbp
    ret
