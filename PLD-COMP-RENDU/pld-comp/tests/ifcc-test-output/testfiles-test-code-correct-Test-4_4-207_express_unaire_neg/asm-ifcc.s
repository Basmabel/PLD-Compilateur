.globl    main
 main: 
    #prologue
    pushq %rbp
    movq %rsp, %rbp
    movq    $5, -24(%rbp)
    movq    -8(%rbp), %rax
    movq    -24(%rbp), %r10
    movq    %r10, (%rax)
    movq    $1, -32(%rbp)
    movq    -8(%rbp), %rax
    subq    -8(%rbp), %rax
    movq    %rax, -40(%rbp)
    cmpq   $0, -40(%rbp)
    sete    %al
    movzbq  %al, %rax
 	 movq   %rax, -48(%rbp)
    movq    -32(%rbp), %rax
    addq    -48(%rbp), %rax
    movq    %rax, -56(%rbp)
    movq    -16(%rbp), %rax
    movq    -56(%rbp), %r10
    movq    %r10, (%rax)
    movq    -16(%rbp), %rax
    #epilogue
    popq %rbp
    ret
