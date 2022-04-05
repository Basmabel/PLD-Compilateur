.globl    main
 main: 
    #prologue
    pushq %rbp
    movq %rsp, %rbp
    subq   $240, %rsp
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
    movq    $4, -56(%rbp)
    movq    -8(%rbp), %rax
    addq    -56(%rbp), %rax
    movq    %rax, -64(%rbp)
    movq    $-8, -72(%rbp)
    movq    %rbp, %rax
    addq    -72(%rbp), %rax
    movq    %rax, -72(%rbp)
    movq    -72(%rbp), %rax
    movq    -64(%rbp), %r10
    movq    %r10, (%rax)
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
    movq    $1, -136(%rbp)
    movq    -16(%rbp), %rax
    addq    -136(%rbp), %rax
    movq    %rax, -144(%rbp)
    movq    $-16, -152(%rbp)
    movq    %rbp, %rax
    addq    -152(%rbp), %rax
    movq    %rax, -152(%rbp)
    movq    -152(%rbp), %rax
    movq    -144(%rbp), %r10
    movq    %r10, (%rax)
    movq    $0, -160(%rbp)
    movq    $-8, -168(%rbp)
    movq    %rbp, %rax
    addq    -168(%rbp), %rax
    movq    %rax, -168(%rbp)
    movq    -168(%rbp), %rax
    movq    -160(%rbp), %r10
    movq    %r10, (%rax)
    cmpq    $0, -168(%rbp)
    sete    %al
    movzbq  %al, %rax
    movq    %rax, -176(%rbp)
    je     main_elseblock5
    jmp    main_thenblock4
main_thenblock4:
    movq    $10, -184(%rbp)
    movq    $-16, -192(%rbp)
    movq    %rbp, %rax
    addq    -192(%rbp), %rax
    movq    %rax, -192(%rbp)
    movq    -192(%rbp), %rax
    movq    -184(%rbp), %r10
    movq    %r10, (%rax)
    jmp    main_endifblock6
main_elseblock5:
    movq    $0, -200(%rbp)
    movq    $-16, -208(%rbp)
    movq    %rbp, %rax
    addq    -208(%rbp), %rax
    movq    %rax, -208(%rbp)
    movq    -208(%rbp), %rax
    movq    -200(%rbp), %r10
    movq    %r10, (%rax)
    jmp    main_endifblock6
main_endifblock6:
    movq    $10, -216(%rbp)
    movq    $-16, -224(%rbp)
    movq    %rbp, %rax
    addq    -224(%rbp), %rax
    movq    %rax, -224(%rbp)
    movq    -224(%rbp), %rax
    movq    -216(%rbp), %r10
    movq    %r10, (%rax)
    movq    -8(%rbp), %rax
    addq    -16(%rbp), %rax
    movq    %rax, -232(%rbp)
    movq    -232(%rbp), %rax
    jmp    main_exit_block
main_exit_block:
    #epilogue
    leave
    ret
