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
    movq    $2, -32(%rbp)
    movq    $-40, -48(%rbp)
    movq    %rbp, %rax
    addq    -48(%rbp), %rax
    movq    %rax, -48(%rbp)
    movq    -48(%rbp), %rax
    movq    -32(%rbp), %r10
    movq    %r10, (%rax)
    jmp    conditionblock1
conditionblock1:
    movq    -16(%rbp), %rax
    addq    -40(%rbp), %rax
    movq    %rax, -56(%rbp)
    movq    $20, -64(%rbp)
    movq    -56(%rbp), %rax
    cmpq    -64(%rbp), %rax
    setl    %al
    movzbq  %al, %rax
    movq    %rax, -72(%rbp)
    cmpq    $0, -72(%rbp)
    sete    %al
    movzbq  %al, %rax
    movq    %rax, -80(%rbp)
    je     endwhileblock3
    jmp    whileBodyblock2
whileBodyblock2:
    movq    $1, -88(%rbp)
    movq    -16(%rbp), %rax
    addq    -88(%rbp), %rax
    movq    %rax, -96(%rbp)
    movq    $-16, -104(%rbp)
    movq    %rbp, %rax
    addq    -104(%rbp), %rax
    movq    %rax, -104(%rbp)
    movq    -104(%rbp), %rax
    movq    -96(%rbp), %r10
    movq    %r10, (%rax)
    movq    -16(%rbp), %rax
    addq    -40(%rbp), %rax
    movq    %rax, -112(%rbp)
    movq    $-40, -120(%rbp)
    movq    %rbp, %rax
    addq    -120(%rbp), %rax
    movq    %rax, -120(%rbp)
    movq    -120(%rbp), %rax
    movq    -112(%rbp), %r10
    movq    %r10, (%rax)
    jmp    conditionblock1
endwhileblock3:
    movq    -16(%rbp), %rax
    jmp    exit_block
exit_block:
    #epilogue
    popq %rbp
    ret
