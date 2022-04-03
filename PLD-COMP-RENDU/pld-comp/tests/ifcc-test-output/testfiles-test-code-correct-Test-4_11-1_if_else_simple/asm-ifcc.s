.globl    main
 main: 
    #prologue
    pushq %rbp
    movq %rsp, %rbp
    movq    $3, -24(%rbp)
    movq    -24(%rbp), %rax
    movq    %rax, -8(%rbp)
    movq    $0, -32(%rbp)
    movq    -32(%rbp), %rax
    movq    %rax, -16(%rbp)
    movq    $2, -40(%rbp)
    movq    -8(%rbp), %rax
    cmpq    -40(%rbp), %rax
    sete    %al
    movzbq  %al, %rax
    movq    %rax, -48(%rbp)
    cmpq    $0, -48(%rbp)
    sete    %al
    movzbq  %al, %rax
    movq    %rax, -56(%rbp)
    je     elseblock2
    jmp    thenblock1
thenblock1:
    movq    $1, -64(%rbp)
    movq    -64(%rbp), %rax
    movq    %rax, -16(%rbp)
    jmp    endifblock3
elseblock2:
    movq    $2, -72(%rbp)
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
