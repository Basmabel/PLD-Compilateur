.globl    main
 main: 
    #prologue
    pushq %rbp
    movq %rsp, %rbp
    subq   $176, %rsp
    movq    $4, -24(%rbp)
    movq    $-8, -32(%rbp)
    movq    %rbp, %rax
    addq    -32(%rbp), %rax
    movq    %rax, -32(%rbp)
    movq    -32(%rbp), %rax
    movq    -24(%rbp), %r10
    movq    %r10, (%rax)
    movq    $3, -40(%rbp)
    movq    $-16, -48(%rbp)
    movq    %rbp, %rax
    addq    -48(%rbp), %rax
    movq    %rax, -48(%rbp)
    movq    -48(%rbp), %rax
    movq    -40(%rbp), %r10
    movq    %r10, (%rax)
    movq    $2, -56(%rbp)
    movq    $4, -64(%rbp)
    movq    -64(%rbp), %rax
    imulq    -56(%rbp), %rax
    movq    %rax, -72(%rbp)
    movq    $5, -80(%rbp)
    movq    -72(%rbp), %rax
    cltd
 	 idivl    -80(%rbp)
    movq    %rax, -88(%rbp)
    movq    $8, -96(%rbp)
    movq    -88(%rbp), %rax
    addq    -96(%rbp), %rax
    movq    %rax, -104(%rbp)
    movq    $5, -112(%rbp)
    movq    -104(%rbp), %rax
    subq    -112(%rbp), %rax
    movq    %rax, -120(%rbp)
    movq    -8(%rbp), %rax
    cmpq    -120(%rbp), %rax
    sete    %al
    movzbq  %al, %rax
    movq    %rax, -128(%rbp)
    cmpq    $0, -128(%rbp)
    sete    %al
    movzbq  %al, %rax
    movq    %rax, -136(%rbp)
    je     main_elseblock2
    jmp    main_thenblock1
main_thenblock1:
    movq    $1, -144(%rbp)
    movq    $-16, -152(%rbp)
    movq    %rbp, %rax
    addq    -152(%rbp), %rax
    movq    %rax, -152(%rbp)
    movq    -152(%rbp), %rax
    movq    -144(%rbp), %r10
    movq    %r10, (%rax)
    jmp    main_endifblock3
main_elseblock2:
    movq    $2, -160(%rbp)
    movq    $-16, -168(%rbp)
    movq    %rbp, %rax
    addq    -168(%rbp), %rax
    movq    %rax, -168(%rbp)
    movq    -168(%rbp), %rax
    movq    -160(%rbp), %r10
    movq    %r10, (%rax)
    jmp    main_endifblock3
main_endifblock3:
    movq    -16(%rbp), %rax
    jmp    main_exit_block
main_exit_block:
    #epilogue
    leave
    ret
