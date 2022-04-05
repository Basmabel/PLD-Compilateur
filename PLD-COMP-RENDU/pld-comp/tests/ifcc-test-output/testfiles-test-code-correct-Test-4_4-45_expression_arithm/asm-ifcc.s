.globl    main
 main: 
    #prologue
    pushq %rbp
    movq %rsp, %rbp
    movq    $1, -40(%rbp)
    movq    -8(%rbp), %rax
    movq    -40(%rbp), %r10
    movq    %r10, (%rax)
    movq    $2, -48(%rbp)
    movq    -16(%rbp), %rax
    movq    -48(%rbp), %r10
    movq    %r10, (%rax)
    movq    $3, -56(%rbp)
    movq    -24(%rbp), %rax
    movq    -56(%rbp), %r10
    movq    %r10, (%rax)
    movq    $4, -64(%rbp)
    movq    -32(%rbp), %rax
    movq    -64(%rbp), %r10
    movq    %r10, (%rax)
 	 movq   -16(%rbp), %rax
 	 negq   %rax
 	 movq   %rax, -80(%rbp)
    movq    -80(%rbp), %rax
    imulq    -8(%rbp), %rax
    movq    %rax, -88(%rbp)
 	 movq   -32(%rbp), %rax
 	 negq   %rax
 	 movq   %rax, -96(%rbp)
    movq    -96(%rbp), %rax
    imulq    -24(%rbp), %rax
    movq    %rax, -104(%rbp)
    movq    -88(%rbp), %rax
    addq    -104(%rbp), %rax
    movq    %rax, -112(%rbp)
    movq    -72(%rbp), %rax
    movq    -112(%rbp), %r10
    movq    %r10, (%rax)
    movq    -72(%rbp), %rax
    #epilogue
    popq %rbp
    ret
