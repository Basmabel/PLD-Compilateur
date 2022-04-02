.globl    main
 main: 
    #prologue
    pushq %rbp
    movq %rsp, %rbp
    movq    $6, -8(%rbp)
    cmpq   $0, -8(%rbp)
    sete    %al
    movzbq  %al, %rax
 	 movq   %rax, -16(%rbp)
    movq    -16(%rbp), %rax
    #epilogue
    popq %rbp
    ret
