.globl    main
 main: 
    #prologue
    pushq %rbp
    movq %rsp, %rbp
    movq    $-8, -16(%rbp)
    movq    %rbp, %rax
    addq    -16(%rbp), %rax
    movq    %rax, -16(%rbp)
    movq    $900, -24(%rbp)
 	 movq   -24(%rbp), %rax
 	 negq   %rax
 	 movq   %rax, -32(%rbp)
    movq    $-8, -40(%rbp)
    movq    %rbp, %rax
    addq    -40(%rbp), %rax
    movq    %rax, -40(%rbp)
    movq    -40(%rbp), %rax
    movq    -32(%rbp), %r10
    movq    %r10, (%rax)
    movq    $-48, -56(%rbp)
    movq    %rbp, %rax
    addq    -56(%rbp), %rax
    movq    %rax, -56(%rbp)
    movq    $50, -64(%rbp)
    movq    -64(%rbp), %rax
    addq    -8(%rbp), %rax
    movq    %rax, -72(%rbp)
    movq    $-48, -80(%rbp)
    movq    %rbp, %rax
    addq    -80(%rbp), %rax
    movq    %rax, -80(%rbp)
    movq    -80(%rbp), %rax
    movq    -72(%rbp), %r10
    movq    %r10, (%rax)
    movq    -48(%rbp), %rax
    #epilogue
    popq %rbp
    ret
