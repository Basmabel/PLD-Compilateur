.globl    main
 main: 
    # prologue
    pushq %rbp
    movq %rsp, %rbp

    #body
 	 movl	$5, -4(%rbp)
 	 movl	$4, -8(%rbp)
 	 movl	-8(%rbp), %eax
    #epilogue
    popq %rbp
    ret
