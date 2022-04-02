.globl    _main
 _main: 
    #prologue
    pushq %rbp
    movq %rsp, %rbp
    movq    $4, -12(%rbp)
    movq    -12(%rbp), %rax
    movq    %rax, -8(%rbp)
    movq    $5, -16(%rbp)
    movq    -8(%rbp), %rax
    cmpq    -16(%rbp), %rax
    sete    %al
    movzbq  %al, %rax
    movq    %rax, -20(%rbp)
    movq    -20(%rbp), %rax
    movq    %rax, -4(%rbp)
    movq    -4(%rbp), %rax
jmp exit_block
exit_block:
    #epilogue
    popq %rbp
    ret
