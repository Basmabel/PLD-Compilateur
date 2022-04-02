.globl    _main
 _main: 
    #prologue
    pushq %rbp
    movq %rsp, %rbp
entry_block:
    movq    $5, -24(%rbp)
    movq    -24(%rbp), %rax
    movq    %rax, -16(%rbp)
    movq    $5, -32(%rbp)
    movq    -16(%rbp), %rax
    cmpq    -32(%rbp), %rax
    sete    %al
    movzbq  %al, %rax
    movq    %rax, -40(%rbp)
    movq    -40(%rbp), %rax
    movq    %rax, -8(%rbp)
    movq    -8(%rbp), %rax
exit_block:
    #epilogue
    popq %rbp
    ret
