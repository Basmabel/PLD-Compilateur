.globl    main
 main: 
    #prologue
    pushq %rbp
    movq %rsp, %rbp
    subq   $184, %rsp
    movq    $1, -48(%rbp)
    movq    $-8, -56(%rbp)
    movq    %rbp, %rax
    addq    -56(%rbp), %rax
    movq    %rax, -56(%rbp)
    movq    -56(%rbp), %rax
    movq    -48(%rbp), %r10
    movq    %r10, (%rax)
    movq    $2, -64(%rbp)
    movq    $-16, -72(%rbp)
    movq    %rbp, %rax
    addq    -72(%rbp), %rax
    movq    %rax, -72(%rbp)
    movq    -72(%rbp), %rax
    movq    -64(%rbp), %r10
    movq    %r10, (%rax)
    movq    $3, -80(%rbp)
    movq    $-24, -88(%rbp)
    movq    %rbp, %rax
    addq    -88(%rbp), %rax
    movq    %rax, -88(%rbp)
    movq    -88(%rbp), %rax
    movq    -80(%rbp), %r10
    movq    %r10, (%rax)
    movq    $4, -96(%rbp)
    movq    $-32, -104(%rbp)
    movq    %rbp, %rax
    addq    -104(%rbp), %rax
    movq    %rax, -104(%rbp)
    movq    -104(%rbp), %rax
    movq    -96(%rbp), %r10
    movq    %r10, (%rax)
    movq    -8(%rbp), %rax
    addq    -16(%rbp), %rax
    movq    %rax, -112(%rbp)
    movq    -24(%rbp), %rax
    addq    -32(%rbp), %rax
    movq    %rax, -120(%rbp)
    movq    -112(%rbp), %rax
    cqo
 	 idivq    -120(%rbp)
    movq    %rax, -128(%rbp)
    movq    $3, -136(%rbp)
    movq    -136(%rbp), %rax
    imulq    -128(%rbp), %rax
    movq    %rax, -144(%rbp)
    movq    $2, -152(%rbp)
    movq    -8(%rbp), %rax
    addq    -152(%rbp), %rax
    movq    %rax, -160(%rbp)
    movq    -160(%rbp), %rax
    imulq    -144(%rbp), %rax
    movq    %rax, -168(%rbp)
    movq    $-40, -176(%rbp)
    movq    %rbp, %rax
    addq    -176(%rbp), %rax
    movq    %rax, -176(%rbp)
    movq    -176(%rbp), %rax
    movq    -168(%rbp), %r10
    movq    %r10, (%rax)
    movq    -40(%rbp), %rax
    jmp    main_exit_block
main_exit_block:
    #epilogue
    leave
    ret
