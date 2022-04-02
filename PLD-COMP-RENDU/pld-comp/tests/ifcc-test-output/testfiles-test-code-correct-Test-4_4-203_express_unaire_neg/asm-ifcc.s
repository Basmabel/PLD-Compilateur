.globl    main
 main: 
    #prologue
    pushq %rbp
    movq %rsp, %rbp
    movq    $0, -24(%rbp)
    movq    -8(%rbp), %rax
    movq    -24(%rbp), %r10
    movq    %r10, (%rax)
    cmpq   $0, -8(%rbp)
    sete    %al
    movzbq  %al, %rax
 	 movq   %rax, -32(%rbp)
    movq    -16(%rbp), %rax
    movq    -32(%rbp), %r10
    movq    %r10, (%rax)
    movq    -16(%rbp), %rax
    #epilogue
    popq %rbp
    ret
