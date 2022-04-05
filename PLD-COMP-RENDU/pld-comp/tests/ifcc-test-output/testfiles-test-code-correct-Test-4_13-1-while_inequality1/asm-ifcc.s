.globl    _main
 _main: 
    #prologue
    pushq %rbp
    movq %rsp, %rbp
    movq    $-8, -16(%rbp)
    movq    %rbp, %rax
    addq    -16(%rbp), %rax
    movq    %rax, -16(%rbp)
    movq    $1, -24(%rbp)
    movq    $-8, -32(%rbp)
    movq    %rbp, %rax
    addq    -32(%rbp), %rax
    movq    %rax, -32(%rbp)
    movq    -32(%rbp), %rax
    movq    -24(%rbp), %r10
    movq    %r10, (%rax)
    jmp    conditionblock1
conditionblock1:
    movq    $4, -40(%rbp)
    movq    -8(%rbp), %rax
    cmpq    -40(%rbp), %rax
    setl    %al
    movzbq  %al, %rax
    movq    %rax, -48(%rbp)
    cmpq    $0, -48(%rbp)
    sete    %al
    movzbq  %al, %rax
    movq    %rax, -56(%rbp)
    je     endwhileblock3
    jmp    whileBodyblock2
whileBodyblock2:
    movq    $1, -64(%rbp)
    movq    -8(%rbp), %rax
    addq    -64(%rbp), %rax
    movq    %rax, -72(%rbp)
    movq    $-8, -80(%rbp)
    movq    %rbp, %rax
    addq    -80(%rbp), %rax
    movq    %rax, -80(%rbp)
    movq    -80(%rbp), %rax
    movq    -72(%rbp), %r10
    movq    %r10, (%rax)
    jmp    conditionblock1
endwhileblock3:
    movq    -8(%rbp), %rax
    jmp    exit_block
exit_block:
    #epilogue
    popq %rbp
    ret
