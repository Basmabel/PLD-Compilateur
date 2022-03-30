.globl    main
 main: 
    #prologue
    pushq %rbp
    movq %rsp, %rbp
    movq    $9, -8(%rbp)
 	 movq   -8(%rbp), %rax
 	 negq   %rax
 	 movq   %rax, -16(%rbp)
    movq    $3, -24(%rbp)
    movq    -16(%rbp), %rax
    cltd
 	 idivl    -24(%rbp)
    movq    %rax, -32(%rbp)
    movq    -32(%rbp), %rax
    #epilogue
    popq %rbp
    ret
