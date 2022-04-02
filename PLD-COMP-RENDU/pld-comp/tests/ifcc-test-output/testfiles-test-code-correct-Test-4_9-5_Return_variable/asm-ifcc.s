.globl    test
 test: 
    #prologue
    pushq %rbp
    movq %rsp, %rbp
    movq    -8(%rbp), %rax
    #epilogue
    popq %rbp
    ret
.globl    main
 main: 
    #prologue
    pushq %rbp
    movq %rsp, %rbp
    movq    $8, -32(%rbp)
    movq    -8(%rbp), %rax
    movq    -32(%rbp), %r10
    movq    %r10, (%rax)
    movq    $4, -40(%rbp)
    movq    $5, -48(%rbp)
    movq    -40(%rbp), %rax
    addq    -48(%rbp), %rax
    movq    %rax, -56(%rbp)
    movq    -16(%rbp), %rax
    movq    -56(%rbp), %r10
    movq    %r10, (%rax)
    movq    $2, -72(%rbp)
    movq    64(%rbp), %r8
    movq    72(%rbp), %rdi
    movq    %r8, %r9
    movq    %rdi, %r8
    movq    %rax, %rdi
    call    test
    movq    -24(%rbp), %rax
    movq    -64(%rbp), %r10
    movq    %r10, (%rax)
    movq    -8(%rbp), %rax
    #epilogue
    popq %rbp
    ret
