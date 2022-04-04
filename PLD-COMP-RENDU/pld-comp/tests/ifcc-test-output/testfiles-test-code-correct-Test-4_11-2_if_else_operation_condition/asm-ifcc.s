.globl    _main
 _main: 
    #prologue
    pushq %rbp
    movq %rsp, %rbp
    movq    $4, -24(%rbp)
    movq    -24(%rbp), %rax
    movq    %rax, -8(%rbp)
    movq    $3, -32(%rbp)
    movq    -32(%rbp), %rax
    movq    %rax, -16(%rbp)
    movq    $2, -40(%rbp)
    movq    $4, -48(%rbp)
    movq    -48(%rbp), %rax
    imulq    -40(%rbp), %rax
    movq    %rax, -56(%rbp)
    movq    $5, -64(%rbp)
    movq    -56(%rbp), %rax
    cltd
 	 idivl    -64(%rbp)
    movq    %rax, -72(%rbp)
    movq    $8, -80(%rbp)
    movq    -72(%rbp), %rax
    addq    -80(%rbp), %rax
    movq    %rax, -88(%rbp)
    movq    $5, -96(%rbp)
    movq    -88(%rbp), %rax
    subq    -96(%rbp), %rax
    movq    %rax, -104(%rbp)
    movq    -8(%rbp), %rax
    cmpq    -104(%rbp), %rax
    sete    %al
    movzbq  %al, %rax
    movq    %rax, -112(%rbp)
    cmpq    $0, -112(%rbp)
    sete    %al
    movzbq  %al, %rax
    movq    %rax, -120(%rbp)
    je     elseblock2
    jmp    thenblock1
thenblock1:
    movq    $1, -128(%rbp)
    movq    -128(%rbp), %rax
    movq    %rax, -16(%rbp)
    jmp    endifblock3
elseblock2:
    movq    $2, -136(%rbp)
    movq    -136(%rbp), %rax
    movq    %rax, -16(%rbp)
    jmp    endifblock3
endifblock3:
    movq    -16(%rbp), %rax
    jmp    exit_block
exit_block:
    #epilogue
    popq %rbp
    ret
