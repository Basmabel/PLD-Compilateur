.globl    _main
 _main: 
    #prologue
    pushq %rbp
    movq %rsp, %rbp
    movq    $5, -24(%rbp)
    movq    -24(%rbp), %rax
    movq    %rax, -8(%rbp)
    movq    $4, -32(%rbp)
    movq    -32(%rbp), %rax
    movq    %rax, -16(%rbp)
    movq    -16(%rbp), %rax
    cmpq    -8(%rbp), %rax
    setl    %al
    movzbq  %al, %rax
    movq    %rax, -40(%rbp)
    cmpq    $0, -40(%rbp)
    sete    %al
    movzbq  %al, %rax
    movq    %rax, -48(%rbp)
    je     elseblock2
    jmp    thenblock1
thenblock1:
    movq    $10, -56(%rbp)
    movq    -56(%rbp), %rax
    movq    %rax, -8(%rbp)
    jmp    endifblock3
elseblock2:
    movq    $5, -64(%rbp)
    movq    -64(%rbp), %rax
    movq    %rax, -8(%rbp)
    jmp    endifblock3
endifblock3:
    movq    -8(%rbp), %rax
    jmp    exit_block
exit_block:
    #epilogue
    popq %rbp
    ret
