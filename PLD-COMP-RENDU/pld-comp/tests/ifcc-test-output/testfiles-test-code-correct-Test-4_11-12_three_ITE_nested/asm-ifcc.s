.globl    _main
 _main: 
    #prologue
    pushq %rbp
    movq %rsp, %rbp
    movq    $0, -40(%rbp)
    movq    -40(%rbp), %rax
    movq    %rax, -8(%rbp)
    movq    $0, -48(%rbp)
    movq    -48(%rbp), %rax
    movq    %rax, -16(%rbp)
    movq    $1, -56(%rbp)
    movq    -8(%rbp), %rax
    cmpq    -56(%rbp), %rax
    setne    %al
    movzbq  %al, %rax
    movq    %rax, -64(%rbp)
    cmpq    $0, -64(%rbp)
    sete    %al
    movzbq  %al, %rax
    movq    %rax, -72(%rbp)
    je     elseblock2
    jmp    thenblock1
thenblock1:
    movq    $1, -80(%rbp)
    movq    -80(%rbp), %rax
    movq    %rax, -16(%rbp)
    movq    $2, -88(%rbp)
    movq    -8(%rbp), %rax
    cmpq    -88(%rbp), %rax
    sete    %al
    movzbq  %al, %rax
    movq    %rax, -96(%rbp)
    cmpq    $0, -96(%rbp)
    sete    %al
    movzbq  %al, %rax
    movq    %rax, -104(%rbp)
    je     elseblock5
    jmp    thenblock4
elseblock2:
    movq    $3, -248(%rbp)
    movq    -16(%rbp), %rax
    addq    -248(%rbp), %rax
    movq    %rax, -256(%rbp)
    movq    -256(%rbp), %rax
    movq    %rax, -16(%rbp)
    jmp    endifblock3
endifblock3:
    movq    -8(%rbp), %rax
    addq    -16(%rbp), %rax
    movq    %rax, -264(%rbp)
    movq    -264(%rbp), %rax
    addq    -24(%rbp), %rax
    movq    %rax, -272(%rbp)
    movq    -272(%rbp), %rax
    jmp    exit_block
thenblock4:
    movq    $2, -112(%rbp)
    movq    -112(%rbp), %rax
    movq    %rax, -16(%rbp)
    jmp    endifblock6
elseblock5:
    movq    $0, -120(%rbp)
    movq    -120(%rbp), %rax
    movq    %rax, -16(%rbp)
    movq    $2, -128(%rbp)
    movq    $5, -136(%rbp)
    movq    -136(%rbp), %rax
    imulq    -128(%rbp), %rax
    movq    %rax, -144(%rbp)
    movq    -8(%rbp), %rax
    addq    -144(%rbp), %rax
    movq    %rax, -152(%rbp)
    movq    $2, -160(%rbp)
    movq    -152(%rbp), %rax
    subq    -160(%rbp), %rax
    movq    %rax, -168(%rbp)
    movq    $1, -176(%rbp)
    movq    -16(%rbp), %rax
    cltd
 	 idivl    -176(%rbp)
    movq    %rax, -184(%rbp)
    movq    -168(%rbp), %rax
    addq    -184(%rbp), %rax
    movq    %rax, -192(%rbp)
    movq    -192(%rbp), %rax
    movq    %rax, -24(%rbp)
    cmpq    $0, -24(%rbp)
    sete    %al
    movzbq  %al, %rax
    movq    %rax, -200(%rbp)
    je     elseblock8
    jmp    thenblock7
endifblock6:
    jmp    endifblock3
thenblock7:
    movq    $2, -208(%rbp)
    movq    -16(%rbp), %rax
    addq    -208(%rbp), %rax
    movq    %rax, -216(%rbp)
    movq    -216(%rbp), %rax
    movq    %rax, -16(%rbp)
    jmp    endifblock9
elseblock8:
    movq    $2, -224(%rbp)
    movq    -8(%rbp), %rax
    addq    -224(%rbp), %rax
    movq    %rax, -232(%rbp)
    movq    -232(%rbp), %rax
    movq    %rax, -8(%rbp)
    jmp    endifblock9
endifblock9:
    movq    $10, -240(%rbp)
    movq    -240(%rbp), %rax
    movq    %rax, -8(%rbp)
    jmp    endifblock6
exit_block:
    #epilogue
    popq %rbp
    ret
