.globl    main
 main: 
    #prologue
    pushq %rbp
    movq %rsp, %rbp
    movq    $0, -24(%rbp)
    movq    -24(%rbp), %rax
    movq    %rax, -8(%rbp)
    movq    $0, -32(%rbp)
    movq    -32(%rbp), %rax
    movq    %rax, -16(%rbp)
    movq    -8(%rbp), %rax
    addq    -16(%rbp), %rax
    movq    %rax, -40(%rbp)
    movq    $0, -48(%rbp)
    movq    -40(%rbp), %rax
    cmpq    -48(%rbp), %rax
    sete    %al
    movzbq  %al, %rax
    movq    %rax, -56(%rbp)
    cmpq    $0, -56(%rbp)
    sete    %al
    movzbq  %al, %rax
    movq    %rax, -64(%rbp)
    je     elseblock2
    jmp    thenblock1
thenblock1:
    movq    $2, -72(%rbp)
    movq    -16(%rbp), %rax
    addq    -72(%rbp), %rax
    movq    %rax, -80(%rbp)
    movq    -80(%rbp), %rax
    movq    %rax, -16(%rbp)
    jmp    endifblock3
elseblock2:
    movq    $3, -88(%rbp)
    movq    -16(%rbp), %rax
    addq    -88(%rbp), %rax
    movq    %rax, -96(%rbp)
    movq    -96(%rbp), %rax
    movq    %rax, -16(%rbp)
    jmp    endifblock3
endifblock3:
    movq    -16(%rbp), %rax
    jmp    exit_block
exit_block:
    #epilogue
    popq %rbp
    ret
