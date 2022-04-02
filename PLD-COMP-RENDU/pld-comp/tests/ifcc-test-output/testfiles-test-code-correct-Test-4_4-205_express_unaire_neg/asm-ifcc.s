.globl    main
 main: 
    #prologue
    pushq %rbp
    movq %rsp, %rbp
    movq    $-8, -16(%rbp)
    movq    %rbp, %rax
    addq    -16(%rbp), %rax
    movq    %rax, -16(%rbp)
    movq    $-24, -32(%rbp)
    movq    %rbp, %rax
    addq    -32(%rbp), %rax
    movq    %rax, -32(%rbp)
    movq    $5, -40(%rbp)
    movq    $-8, -48(%rbp)
    movq    %rbp, %rax
    addq    -48(%rbp), %rax
    movq    %rax, -48(%rbp)
    movq    -48(%rbp), %rax
    movq    -40(%rbp), %r10
    movq    %r10, (%rax)
    movq    $6, -56(%rbp)
    movq    $9, -64(%rbp)
    movq    -64(%rbp), %rax
    imulq    -56(%rbp), %rax
    movq    %rax, -72(%rbp)
    cmpq   $0, -8(%rbp)
    sete    %al
    movzbq  %al, %rax
 	 movq   %rax, -80(%rbp)
    movq    -72(%rbp), %rax
    addq    -80(%rbp), %rax
    movq    %rax, -88(%rbp)
    movq    $-24, -96(%rbp)
    movq    %rbp, %rax
    addq    -96(%rbp), %rax
    movq    %rax, -96(%rbp)
    movq    -96(%rbp), %rax
    movq    -88(%rbp), %r10
    movq    %r10, (%rax)
    movq    -24(%rbp), %rax
    #epilogue
    popq %rbp
    ret
