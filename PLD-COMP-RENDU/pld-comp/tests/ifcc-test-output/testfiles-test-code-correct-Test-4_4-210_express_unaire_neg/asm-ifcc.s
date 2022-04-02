.globl    main
 main: 
    #prologue
    pushq %rbp
    movq %rsp, %rbp
    movq    $5, -8(%rbp)
    cmpq   $0, -8(%rbp)
    sete    %al
    movzbq  %al, %rax
 	 movq   %rax, -16(%rbp)
    movq    $0, -24(%rbp)
    movq    -24(%rbp), %rax
    imulq    -16(%rbp), %rax
    movq    %rax, -32(%rbp)
    movq    -32(%rbp), %rax
    #epilogue
    popq %rbp
    ret
