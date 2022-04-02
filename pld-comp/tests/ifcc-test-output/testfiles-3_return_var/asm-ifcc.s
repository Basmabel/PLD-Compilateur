.globl    main
 main: 
    # prologue
    pushq %rbp
    movq %rsp, %rbp

    #body
 	 movq	$8, -8(%rbp)
	 movq   -8(%rbp), %rax
	 movq   %rax, -4(%rbp)
 	 movq	-4(%rbp), %rax
    #epilogue
    popq %rbp
    ret
