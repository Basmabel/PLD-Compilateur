.globl    main
 main: 
    #prologue
    pushq %rbp
    movq %rsp, %rbp
    movq    $0, -24(%rbp)
    movq    -8(%rbp), %rax
    movq    -24(%rbp), %r10
    movq    %r10, (%rax)
    movq    $6, -32(%rbp)
    movq    $9, -40(%rbp)
    movq    -40(%rbp), %rax
    imulq    -32(%rbp), %rax
    movq    %rax, -48(%rbp)
    cmpq   $0, -8(%rbp)
    sete    %al
    movzbq  %al, %rax
 	 movq   %rax, -56(%rbp)
    movq    -48(%rbp), %rax
    addq    -56(%rbp), %rax
    movq    %rax, -64(%rbp)
    movq    -16(%rbp), %rax
    movq    -64(%rbp), %r10
    movq    %r10, (%rax)
    movq    -16(%rbp), %rax
    #epilogue
    popq %rbp
    ret
