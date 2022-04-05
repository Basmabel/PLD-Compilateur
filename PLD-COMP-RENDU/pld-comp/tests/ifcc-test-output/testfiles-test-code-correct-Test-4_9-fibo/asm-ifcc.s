.globl    fibbonacci
 fibbonacci: 
    #prologue
    pushq %rbp
    movq %rsp, %rbp
    movq    %rdi, -8(%rbp)
    movq    $0, -16(%rbp)
    movq    -8(%rbp), %rax
    cmpq    -16(%rbp), %rax
    sete    %al
    movzbq  %al, %rax
    movq    %rax, -24(%rbp)
    cmpq    $0, -24(%rbp)
    sete    %al
    movzbq  %al, %rax
    movq    %rax, -32(%rbp)
    je     fibbonacci_elseblock2
    jmp    fibbonacci_thenblock1
fibbonacci_thenblock1:
    movq    $0, -40(%rbp)
    movq    -40(%rbp), %rax
    jmp    fibbonacci_endifblock3
fibbonacci_elseblock2:
    jmp    fibbonacci_endifblock3
fibbonacci_endifblock3:
    je     fibbonacci_elseblock5
    jmp    fibbonacci_thenblock4
fibbonacci_thenblock4:
    jmp    fibbonacci_endifblock6
fibbonacci_elseblock5:
    movq    104(%rbp), %rdi
    callq   fibbonacci
    movq    %rax,-80(%rbp)
    movq    136(%rbp), %rdi
    callq   fibbonacci
    movq    %rax,-112(%rbp)
    jmp    fibbonacci_endifblock6
fibbonacci_endifblock6:
    jmp    fibbonacci_exit_block
fibbonacci_exit_block:
    #epilogue
    popq %rbp
    ret
.globl    main
 main: 
    #prologue
    pushq %rbp
    movq %rsp, %rbp
    subq   $64, %rsp
    movq    $3, -24(%rbp)
    movq    $-8, -32(%rbp)
    movq    %rbp, %rax
    addq    -32(%rbp), %rax
    movq    %rax, -32(%rbp)
    movq    -32(%rbp), %rax
    movq    -24(%rbp), %r10
    movq    %r10, (%rax)
    movq    -8(%rbp), %rax
    movq     %rax,48(%rbp)
    movq    48(%rbp), %rdi
    callq   fibbonacci
    movq    %rax,-40(%rbp)
    movq    $-16, -56(%rbp)
    movq    %rbp, %rax
    addq    -56(%rbp), %rax
    movq    %rax, -56(%rbp)
    movq    -56(%rbp), %rax
    movq    -40(%rbp), %r10
    movq    %r10, (%rax)
    movq    -16(%rbp), %rax
    jmp    main_exit_block
main_exit_block:
    #epilogue
    leave
    ret
