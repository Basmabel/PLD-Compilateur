.globl    _main
 _main: 
    #prologue
    pushq %rbp
    movq %rsp, %rbp
    movq    $0, -12(%rbp)
    movq    -12(%rbp), %rax
    movq    %rax, -4(%rbp)
    movq    $0, -16(%rbp)
    movq    -16(%rbp), %rax
    movq    %rax, -8(%rbp)
    movq    $4, -20(%rbp)
    movq    -4(%rbp), %rax
    addq    -20(%rbp), %rax
    movq    %rax, -24(%rbp)
    movq    -24(%rbp), %rax
    movq    %rax, -4(%rbp)
