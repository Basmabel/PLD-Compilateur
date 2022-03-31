.globl    _main
 _main: 
    #prologue
    pushq %rbp
    movq %rsp, %rbp
entry_block
    movl    $0, -12(%rbp)
    movl    -12(%rbp), %eax
    movl    %eax, -4(%rbp)
    movl    $0, -16(%rbp)
    movl    -16(%rbp), %eax
    movl    %eax, -8(%rbp)
    movl    $4, -20(%rbp)
    movl    -4(%rbp), %eax
    addl    -20(%rbp), %eax
    movl    %eax, -24(%rbp)
    movl    -24(%rbp), %eax
    movl    %eax, -4(%rbp)
    cmpq    $0, -4(%rbp)
    je     elseblock2
jmp thenblock1
thenblock1
    movl    $2, -28(%rbp)
    movl    -8(%rbp), %eax
    addl    -28(%rbp), %eax
    movl    %eax, -32(%rbp)
    movl    -32(%rbp), %eax
    movl    %eax, -8(%rbp)
jmp endifblock3
elseblock2
    movl    $3, -36(%rbp)
    movl    -8(%rbp), %eax
    addl    -36(%rbp), %eax
    movl    %eax, -40(%rbp)
    movl    -40(%rbp), %eax
    movl    %eax, -8(%rbp)
endifblock3
    movl    -8(%rbp), %eax
    addl    -4(%rbp), %eax
    movl    %eax, -44(%rbp)
    movl    -44(%rbp), %eax
jmp exit_block
exit_block
    #epilogue
    popq %rbp
    ret
