.globl    main
 main: 
    #prologue
    pushq %rbp
    movq %rsp, %rbp
    movq    $3, -16(%rbp)
    movq    -16(%rbp), %rax
    movq    %rax, -8(%rbp)
    cmpq    $0, -8(%rbp)
    sete    %al
    movzbq  %al, %rax
    movq    %rax, -24(%rbp)
    je     elseblock2
    jmp    thenblock1
thenblock1:
    jmp    endifblock3
elseblock2:
    jmp    endifblock3
endifblock3:
    movq    -8(%rbp), %rax
    jmp    exit_block
exit_block:
    #epilogue
    popq %rbp
    ret
