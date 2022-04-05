.globl    main
 main: 
    #prologue
    pushq %rbp
    movq %rsp, %rbp
    subq   $360, %rsp
    movq    $0, -40(%rbp)
    movq    $-8, -48(%rbp)
    movq    %rbp, %rax
    addq    -48(%rbp), %rax
    movq    %rax, -48(%rbp)
    movq    -48(%rbp), %rax
    movq    -40(%rbp), %r10
    movq    %r10, (%rax)
    movq    $0, -56(%rbp)
    movq    $-16, -64(%rbp)
    movq    %rbp, %rax
    addq    -64(%rbp), %rax
    movq    %rax, -64(%rbp)
    movq    -64(%rbp), %rax
    movq    -56(%rbp), %r10
    movq    %r10, (%rax)
    movq    $1, -72(%rbp)
    movq    -8(%rbp), %rax
    cmpq    -72(%rbp), %rax
    setne    %al
    movzbq  %al, %rax
    movq    %rax, -80(%rbp)
    cmpq    $0, -80(%rbp)
    sete    %al
    movzbq  %al, %rax
    movq    %rax, -88(%rbp)
    je     main_elseblock2
    jmp    main_thenblock1
main_thenblock1:
    movq    $1, -96(%rbp)
    movq    $-16, -104(%rbp)
    movq    %rbp, %rax
    addq    -104(%rbp), %rax
    movq    %rax, -104(%rbp)
    movq    -104(%rbp), %rax
    movq    -96(%rbp), %r10
    movq    %r10, (%rax)
    movq    $2, -112(%rbp)
    movq    -8(%rbp), %rax
    cmpq    -112(%rbp), %rax
    sete    %al
    movzbq  %al, %rax
    movq    %rax, -120(%rbp)
    cmpq    $0, -120(%rbp)
    sete    %al
    movzbq  %al, %rax
    movq    %rax, -128(%rbp)
    je     main_elseblock5
    jmp    main_thenblock4
main_elseblock2:
    movq    $3, -320(%rbp)
    movq    -16(%rbp), %rax
    addq    -320(%rbp), %rax
    movq    %rax, -328(%rbp)
    movq    $-16, -336(%rbp)
    movq    %rbp, %rax
    addq    -336(%rbp), %rax
    movq    %rax, -336(%rbp)
    movq    -336(%rbp), %rax
    movq    -328(%rbp), %r10
    movq    %r10, (%rax)
    jmp    main_endifblock3
main_endifblock3:
    movq    -8(%rbp), %rax
    addq    -16(%rbp), %rax
    movq    %rax, -344(%rbp)
    movq    -344(%rbp), %rax
    addq    -24(%rbp), %rax
    movq    %rax, -352(%rbp)
    movq    -352(%rbp), %rax
    jmp    main_exit_block
main_thenblock4:
    movq    $2, -136(%rbp)
    movq    $-16, -144(%rbp)
    movq    %rbp, %rax
    addq    -144(%rbp), %rax
    movq    %rax, -144(%rbp)
    movq    -144(%rbp), %rax
    movq    -136(%rbp), %r10
    movq    %r10, (%rax)
    jmp    main_endifblock6
main_elseblock5:
    movq    $0, -152(%rbp)
    movq    $-16, -160(%rbp)
    movq    %rbp, %rax
    addq    -160(%rbp), %rax
    movq    %rax, -160(%rbp)
    movq    -160(%rbp), %rax
    movq    -152(%rbp), %r10
    movq    %r10, (%rax)
    movq    $2, -168(%rbp)
    movq    $5, -176(%rbp)
    movq    -176(%rbp), %rax
    imulq    -168(%rbp), %rax
    movq    %rax, -184(%rbp)
    movq    -8(%rbp), %rax
    addq    -184(%rbp), %rax
    movq    %rax, -192(%rbp)
    movq    $2, -200(%rbp)
    movq    -192(%rbp), %rax
    subq    -200(%rbp), %rax
    movq    %rax, -208(%rbp)
    movq    $1, -216(%rbp)
    movq    -16(%rbp), %rax
    cltd
 	 idivl    -216(%rbp)
    movq    %rax, -224(%rbp)
    movq    -208(%rbp), %rax
    addq    -224(%rbp), %rax
    movq    %rax, -232(%rbp)
    movq    $-24, -240(%rbp)
    movq    %rbp, %rax
    addq    -240(%rbp), %rax
    movq    %rax, -240(%rbp)
    movq    -240(%rbp), %rax
    movq    -232(%rbp), %r10
    movq    %r10, (%rax)
    cmpq    $0, -240(%rbp)
    sete    %al
    movzbq  %al, %rax
    movq    %rax, -248(%rbp)
    je     main_elseblock8
    jmp    main_thenblock7
main_endifblock6:
    jmp    main_endifblock3
main_thenblock7:
    movq    $2, -256(%rbp)
    movq    -16(%rbp), %rax
    addq    -256(%rbp), %rax
    movq    %rax, -264(%rbp)
    movq    $-16, -272(%rbp)
    movq    %rbp, %rax
    addq    -272(%rbp), %rax
    movq    %rax, -272(%rbp)
    movq    -272(%rbp), %rax
    movq    -264(%rbp), %r10
    movq    %r10, (%rax)
    jmp    main_endifblock9
main_elseblock8:
    movq    $2, -280(%rbp)
    movq    -8(%rbp), %rax
    addq    -280(%rbp), %rax
    movq    %rax, -288(%rbp)
    movq    $-8, -296(%rbp)
    movq    %rbp, %rax
    addq    -296(%rbp), %rax
    movq    %rax, -296(%rbp)
    movq    -296(%rbp), %rax
    movq    -288(%rbp), %r10
    movq    %r10, (%rax)
    jmp    main_endifblock9
main_endifblock9:
    movq    $10, -304(%rbp)
    movq    $-8, -312(%rbp)
    movq    %rbp, %rax
    addq    -312(%rbp), %rax
    movq    %rax, -312(%rbp)
    movq    -312(%rbp), %rax
    movq    -304(%rbp), %r10
    movq    %r10, (%rax)
    jmp    main_endifblock6
main_exit_block:
    #epilogue
    leave
    ret
