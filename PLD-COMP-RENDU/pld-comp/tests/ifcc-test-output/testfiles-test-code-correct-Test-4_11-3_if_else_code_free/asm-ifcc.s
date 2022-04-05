.globl    main
 main: 
    #prologue
    pushq %rbp
    movq %rsp, %rbp
    subq   $40, %rsp
    movq    $3, -16(%rbp)
    movq    $-8, -24(%rbp)
    movq    %rbp, %rax
    addq    -24(%rbp), %rax
    movq    %rax, -24(%rbp)
    movq    -24(%rbp), %rax
    movq    -16(%rbp), %r10
    movq    %r10, (%rax)
    cmpq    $0, -8(%rbp)
    sete    %al
    movzbq  %al, %rax
    movq    %rax, -32(%rbp)
    je     main_elseblock2
    jmp    main_thenblock1
main_thenblock1:
    jmp    main_endifblock3
main_elseblock2:
    jmp    main_endifblock3
main_endifblock3:
    movq    -8(%rbp), %rax
    jmp    main_exit_block
main_exit_block:
    #epilogue
    leave
    ret
