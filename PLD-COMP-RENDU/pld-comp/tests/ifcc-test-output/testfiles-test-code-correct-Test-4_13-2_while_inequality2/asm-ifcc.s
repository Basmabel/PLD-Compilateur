.globl    _main
 _main: 
    #prologue
    pushq %rbp
    movq %rsp, %rbp
    movq    $1, -8(%rbp)
    movq    $-16, -24(%rbp)
    movq    %rbp, %rax
    addq    -24(%rbp), %rax
    movq    %rax, -24(%rbp)
    movq    -24(%rbp), %rax
    movq    -8(%rbp), %r10
    movq    %r10, (%rax)
    jmp    conditionblock1
conditionblock1:
    movq    $10, -32(%rbp)
    movq    -16(%rbp), %rax
    cmpq    -32(%rbp), %rax
    setl    %al
    movzbq  %al, %rax
    movq    %rax, -40(%rbp)
    cmpq    $0, -40(%rbp)
    sete    %al
    movzbq  %al, %rax
    movq    %rax, -48(%rbp)
    je     endwhileblock3
    jmp    whileBodyblock2
whileBodyblock2:
    movq    $2, -56(%rbp)
    movq    -16(%rbp), %rax
    addq    -56(%rbp), %rax
    movq    %rax, -64(%rbp)
    movq    $-16, -72(%rbp)
    movq    %rbp, %rax
    addq    -72(%rbp), %rax
    movq    %rax, -72(%rbp)
    movq    -72(%rbp), %rax
    movq    -64(%rbp), %r10
    movq    %r10, (%rax)
    jmp    conditionblock1
endwhileblock3:
    movq    -16(%rbp), %rax
    jmp    exit_block
exit_block:
    #epilogue
    popq %rbp
    ret
