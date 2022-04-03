.globl    _main
 _main: 
    #prologue
    pushq %rbp
    movq %rsp, %rbp
    movq    $5, -4(%rbp)
    movq    $10, -8(%rbp)
    movq    $2, -12(%rbp)
    movq    -12(%rbp), %rax
    imulq    -8(%rbp), %rax
    movq    %rax, -16(%rbp)
    movq    $6, -20(%rbp)
    movq    $3, -24(%rbp)
    movq    -20(%rbp), %rax
    cltd
 	 idivl    -24(%rbp)
    movq    %rax, -28(%rbp)
    movq    -16(%rbp), %rax
    addq    -28(%rbp), %rax
    movq    %rax, -32(%rbp)
    movq    -32(%rbp), %rax
    imulq    -4(%rbp), %rax
    movq    %rax, -36(%rbp)
    movq    $2, -40(%rbp)
    movq    -36(%rbp), %rax
    cltd
 	 idivl    -40(%rbp)
    movq    %rax, -44(%rbp)
    movq    -44(%rbp), %rax
jmp exit_block
exit_block:
    #epilogue
    popq %rbp
    ret
