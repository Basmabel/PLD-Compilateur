.globl    _main
 _main: 
    #prologue
    pushq %rbp
    movq %rsp, %rbp
    movq    $5, -12(%rbp)
    movq    -12(%rbp), %rax
    movq    %rax, -8(%rbp)
    movq    $5, -16(%rbp)
    movq    $2, -20(%rbp)
    movq    -20(%rbp), %rax
    imulq    -16(%rbp), %rax
    movq    %rax, -24(%rbp)
    movq    $1, -28(%rbp)
    movq    -24(%rbp), %rax
    addq    -28(%rbp), %rax
    movq    %rax, -32(%rbp)
    movq    -32(%rbp), %rax
    movq    %rax, -4(%rbp)
    movq    -4(%rbp), %rax
jmp exit_block
exit_block:
    #epilogue
    popq %rbp
    ret
