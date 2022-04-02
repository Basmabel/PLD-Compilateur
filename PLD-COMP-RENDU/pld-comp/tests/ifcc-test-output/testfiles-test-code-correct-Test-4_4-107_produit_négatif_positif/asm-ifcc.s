.globl    main
 main: 
    #prologue
    pushq %rbp
    movq %rsp, %rbp
    movq    $2, -8(%rbp)
 	 movq   -8(%rbp), %rax
 	 negq   %rax
 	 movq   %rax, -16(%rbp)
    movq    $3, -24(%rbp)
    movq    -24(%rbp), %rax
    imulq    -16(%rbp), %rax
    movq    %rax, -32(%rbp)
    movq    -32(%rbp), %rax
    #epilogue
    popq %rbp
    ret
