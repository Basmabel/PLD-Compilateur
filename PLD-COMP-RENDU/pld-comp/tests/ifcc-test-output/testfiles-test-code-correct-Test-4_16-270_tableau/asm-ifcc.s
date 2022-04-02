.globl    main
 main: 
    #prologue
    pushq %rbp
    movq %rsp, %rbp
    movq    $8, -8(%rbp)
    movq    -16(%rbp), %rax
    movq    -8(%rbp), %r10
    movq    %r10, (%rax)
    movq    $6, -88(%rbp)
    movq    -16(%rbp), %rax
    movq    -88(%rbp), %r10
    movq    %r10, (%rax)
    movq    $42, -96(%rbp)
    movq    -96(%rbp), %rax
    #epilogue
    popq %rbp
    ret
