.globl    main
 main: 
    # prologue
    pushq %rbp
    movq %rsp, %rbp

    #body
 	 movq	$42, -4(%rbp)
 	 movq	-4(%rbp), %rax
    #epilogue
    popq %rbp
    ret
