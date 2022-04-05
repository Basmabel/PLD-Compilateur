.globl    main
 main: 
    #prologue
    pushq %rbp
    movq %rsp, %rbp
    subq   $200, %rsp
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
    movq    $1, -56(%rbp)
    movq    $-8, -64(%rbp)
    movq    %rbp, %rax
    addq    -64(%rbp), %rax
    movq    %rax, -64(%rbp)
    movq    -64(%rbp), %rax
    movq    -56(%rbp), %r10
    movq    %r10, (%rax)
    cmpq    $0, -64(%rbp)
    sete    %al
    movzbq  %al, %rax
    movq    %rax, -72(%rbp)
    je     main_elseblock2
    jmp    main_thenblock1
main_thenblock1:
    movq    $1, -80(%rbp)
    movq    $-16, -88(%rbp)
    movq    %rbp, %rax
    addq    -88(%rbp), %rax
    movq    %rax, -88(%rbp)
    movq    -88(%rbp), %rax
    movq    -80(%rbp), %r10
    movq    %r10, (%rax)
    movq    $2, -96(%rbp)
    movq    $-8, -104(%rbp)
    movq    %rbp, %rax
    addq    -104(%rbp), %rax
    movq    %rax, -104(%rbp)
    movq    -104(%rbp), %rax
    movq    -96(%rbp), %r10
    movq    %r10, (%rax)
    cmpq    $0, -104(%rbp)
    sete    %al
    movzbq  %al, %rax
    movq    %rax, -112(%rbp)
    je     main_elseblock5
    jmp    main_thenblock4
main_elseblock2:
    movq    $3, -152(%rbp)
    movq    -16(%rbp), %rax
    addq    -152(%rbp), %rax
    movq    %rax, -160(%rbp)
    movq    $-16, -168(%rbp)
    movq    %rbp, %rax
    addq    -168(%rbp), %rax
    movq    %rax, -168(%rbp)
    movq    -168(%rbp), %rax
    movq    -160(%rbp), %r10
    movq    %r10, (%rax)
    jmp    main_endifblock3
main_endifblock3:
    movq    $10, -176(%rbp)
    movq    $-16, -184(%rbp)
    movq    %rbp, %rax
    addq    -184(%rbp), %rax
    movq    %rax, -184(%rbp)
    movq    -184(%rbp), %rax
    movq    -176(%rbp), %r10
    movq    %r10, (%rax)
    movq    -8(%rbp), %rax
    addq    -16(%rbp), %rax
    movq    %rax, -192(%rbp)
    movq    -192(%rbp), %rax
    jmp    main_exit_block
main_thenblock4:
    movq    $2, -120(%rbp)
    movq    $-16, -128(%rbp)
    movq    %rbp, %rax
    addq    -128(%rbp), %rax
    movq    %rax, -128(%rbp)
    movq    -128(%rbp), %rax
    movq    -120(%rbp), %r10
    movq    %r10, (%rax)
    jmp    main_endifblock6
main_elseblock5:
    movq    $0, -136(%rbp)
    movq    $-16, -144(%rbp)
    movq    %rbp, %rax
    addq    -144(%rbp), %rax
    movq    %rax, -144(%rbp)
    movq    -144(%rbp), %rax
    movq    -136(%rbp), %r10
    movq    %r10, (%rax)
    jmp    main_endifblock6
main_endifblock6:
    jmp    main_endifblock3
main_exit_block:
    #epilogue
    leave
    ret
