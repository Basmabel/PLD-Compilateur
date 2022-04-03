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
    cmpq    $0, -8(%rbp)
    sete    %al
    movzbq  %al, %rax
    movq    %rax, -40(%rbp)
    je     elseblock2
    jmp    thenblock1
thenblock1:
    movq    $2, -48(%rbp)
    movq    -16(%rbp), %rax
    addq    -48(%rbp), %rax
    movq    %rax, -56(%rbp)
    movq    -56(%rbp), %rax
    movq    %rax, -16(%rbp)
    jmp    endifblock3
elseblock2:
    movq    $3, -64(%rbp)
    movq    -16(%rbp), %rax
    addq    -64(%rbp), %rax
    movq    %rax, -72(%rbp)
    movq    -72(%rbp), %rax
    movq    %rax, -16(%rbp)
    jmp    endifblock3
endifblock3:
    movq    -16(%rbp), %rax
    jmp    exit_block
exit_block:
    #epilogue
    popq %rbp
    ret
