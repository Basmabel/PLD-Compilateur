.globl    _main
 _main: 
    #prologue
    pushq %rbp
    movq %rsp, %rbp
    movq    $0, -24(%rbp)
    movq    -24(%rbp), %rax
    movq    %rax, -8(%rbp)
    movq    $0, -32(%rbp)
    movq    -32(%rbp), %rax
    movq    %rax, -16(%rbp)
    movq    $1, -40(%rbp)
    movq    -40(%rbp), %rax
    movq    %rax, -8(%rbp)
    cmpq    $0, -8(%rbp)
    sete    %al
    movzbq  %al, %rax
    movq    %rax, -48(%rbp)
    je     elseblock2
    jmp    thenblock1
thenblock1:
    movq    $1, -56(%rbp)
    movq    -56(%rbp), %rax
    movq    %rax, -16(%rbp)
    movq    $2, -64(%rbp)
    movq    -64(%rbp), %rax
    movq    %rax, -8(%rbp)
    cmpq    $0, -8(%rbp)
    sete    %al
    movzbq  %al, %rax
    movq    %rax, -72(%rbp)
    je     elseblock5
    jmp    thenblock4
elseblock2:
    movq    $3, -96(%rbp)
    movq    -16(%rbp), %rax
    addq    -96(%rbp), %rax
    movq    %rax, -104(%rbp)
    movq    -104(%rbp), %rax
    movq    %rax, -16(%rbp)
    jmp    endifblock3
endifblock3:
    movq    $10, -112(%rbp)
    movq    -112(%rbp), %rax
    movq    %rax, -16(%rbp)
    movq    -8(%rbp), %rax
    addq    -16(%rbp), %rax
    movq    %rax, -120(%rbp)
    movq    -120(%rbp), %rax
    jmp    exit_block
thenblock4:
    movq    $2, -80(%rbp)
    movq    -80(%rbp), %rax
    movq    %rax, -16(%rbp)
    jmp    endifblock6
elseblock5:
    movq    $0, -88(%rbp)
    movq    -88(%rbp), %rax
    movq    %rax, -16(%rbp)
    jmp    endifblock6
endifblock6:
    jmp    endifblock3
exit_block:
    #epilogue
    popq %rbp
    ret
