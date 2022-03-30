.globl    main
 main: 
    #prologue
    pushq %rbp
    movq %rsp, %rbp
    movq    $2, -8(%rbp)
 	 movq   -8(%rbp), %rax
 	 negq   %rax
 	 movq   %rax, -16(%rbp)
    movq    -16(%rbp), %rax
    #epilogue
    popq %rbp
    ret
