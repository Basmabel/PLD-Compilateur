.globl    _main
 _main: 
    #prologue
    pushq %rbp
    movq %rsp, %rbp
    movl    $0, -12(%rbp)
    movl    -12(%rbp), %eax
    movl    %eax, -4(%rbp)
    movl    $0, -16(%rbp)
    movl    -16(%rbp), %eax
    movl    %eax, -8(%rbp)
    movl    $1, -20(%rbp)
    movl    -20(%rbp), %eax
    movl    %eax, -4(%rbp)
    cmpq    $0, -4(%rbp)
    je     elseblock2
jmp thenblock1
thenblock1:
    movl    $1, -24(%rbp)
    movl    -24(%rbp), %eax
    movl    %eax, -8(%rbp)
    movl    $2, -28(%rbp)
    movl    -28(%rbp), %eax
    movl    %eax, -4(%rbp)
    cmpq    $0, -4(%rbp)
    je     elseblock5
jmp thenblock4
elseblock2:
    movl    $3, -40(%rbp)
    movl    -8(%rbp), %eax
    addl    -40(%rbp), %eax
    movl    %eax, -44(%rbp)
    movl    -44(%rbp), %eax
    movl    %eax, -8(%rbp)
jmp endifblock3
endifblock3:
    movl    $10, -48(%rbp)
    movl    -48(%rbp), %eax
    movl    %eax, -8(%rbp)
    movl    -4(%rbp), %eax
    addl    -8(%rbp), %eax
    movl    %eax, -52(%rbp)
    movl    -52(%rbp), %eax
jmp exit_block
thenblock4:
    movl    $2, -32(%rbp)
    movl    -32(%rbp), %eax
    movl    %eax, -8(%rbp)
jmp endifblock6
elseblock5:
    movl    $0, -36(%rbp)
    movl    -36(%rbp), %eax
    movl    %eax, -8(%rbp)
jmp endifblock6
endifblock6:
jmp endifblock3
exit_block:
    #epilogue
    popq %rbp
    ret
