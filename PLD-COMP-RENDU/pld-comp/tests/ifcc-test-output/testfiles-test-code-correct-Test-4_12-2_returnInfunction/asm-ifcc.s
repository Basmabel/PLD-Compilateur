.globl    test
 test: 
    #prologue
    pushq %rbp
    movq %rsp, %rbp
    movq    %rdi, -8(%rbp)
    movq    $1, -16(%rbp)
    movq    -8(%rbp), %rax
    cmpq    -16(%rbp), %rax
    sete    %al
    movzbq  %al, %rax
    movq    %rax, -24(%rbp)
    cmpq    $0, -24(%rbp)
    sete    %al
    movzbq  %al, %rax
    movq    %rax, -32(%rbp)
    je     test_elseblock2
    jmp    test_thenblock1
test_thenblock1:
    movq    $1, -40(%rbp)
    movq    -40(%rbp), %rax
    jmp    test_endifblock3
test_elseblock2:
    jmp    test_endifblock3
test_endifblock3:
    jmp    test_exit_block
test_exit_block:
    #epilogue
    popq %rbp
    ret
.globl    main
 main: 
    #prologue
    pushq %rbp
    movq %rsp, %rbp
    subq   $104, %rsp
    movq    $98, -16(%rbp)
    movq    $-8, -24(%rbp)
    movq    %rbp, %rax
    addq    -24(%rbp), %rax
    movq    %rax, -24(%rbp)
    movq    -24(%rbp), %rax
    movq    -16(%rbp), %r10
    movq    %r10, (%rax)
    movq    $6, -56(%rbp)
    movq    $-32, -64(%rbp)
    movq    %rbp, %rax
    addq    -64(%rbp), %rax
    movq    %rax, -64(%rbp)
    movq    -64(%rbp), %rax
    movq    -56(%rbp), %r10
    movq    %r10, (%rax)
    movq    $1, -80(%rbp)
    movq    -80(%rbp), %rax
    movq     %rax,88(%rbp)
    movq    88(%rbp), %rdi
    callq   test
    movq    %rax,-72(%rbp)
    movq    $-40, -96(%rbp)
    movq    %rbp, %rax
    addq    -96(%rbp), %rax
    movq    %rax, -96(%rbp)
    movq    -96(%rbp), %rax
    movq    -72(%rbp), %r10
    movq    %r10, (%rax)
    movq    -40(%rbp), %rax
    jmp    main_exit_block
main_exit_block:
    #epilogue
    leave
    ret
