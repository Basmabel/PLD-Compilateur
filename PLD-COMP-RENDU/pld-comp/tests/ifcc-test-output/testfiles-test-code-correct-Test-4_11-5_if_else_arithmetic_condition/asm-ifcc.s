.globl    main
 main: 
    #prologue
    pushq %rbp
    movq %rsp, %rbp
    subq   $136, %rsp
    movq    $0, -24(%rbp)
    movq    $-8, -32(%rbp)
    movq    %rbp, %rax
    addq    -32(%rbp), %rax
    movq    %rax, -32(%rbp)
    movq    -32(%rbp), %rax
    movq    -24(%rbp), %r10
    movq    %r10, (%rax)
    movq    $0, -40(%rbp)
    movq    $-16, -48(%rbp)
    movq    %rbp, %rax
    addq    -48(%rbp), %rax
    movq    %rax, -48(%rbp)
    movq    -48(%rbp), %rax
    movq    -40(%rbp), %r10
    movq    %r10, (%rax)
    movq    -8(%rbp), %rax
    addq    -16(%rbp), %rax
    movq    %rax, -56(%rbp)
    movq    $0, -64(%rbp)
    movq    -56(%rbp), %rax
    cmpq    -64(%rbp), %rax
    sete    %al
    movzbq  %al, %rax
    movq    %rax, -72(%rbp)
    cmpq    $0, -72(%rbp)
    sete    %al
    movzbq  %al, %rax
    movq    %rax, -80(%rbp)
    je     main_elseblock2
    jmp    main_thenblock1
main_thenblock1:
    movq    $2, -88(%rbp)
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
    jmp    main_endifblock3
main_elseblock2:
    movq    $3, -112(%rbp)
    movq    -16(%rbp), %rax
    addq    -112(%rbp), %rax
    movq    %rax, -120(%rbp)
    movq    $-16, -128(%rbp)
    movq    %rbp, %rax
    addq    -128(%rbp), %rax
    movq    %rax, -128(%rbp)
    movq    -128(%rbp), %rax
    movq    -120(%rbp), %r10
    movq    %r10, (%rax)
    jmp    main_endifblock3
main_endifblock3:
    movq    -16(%rbp), %rax
    jmp    main_exit_block
main_exit_block:
    #epilogue
    leave
    ret
