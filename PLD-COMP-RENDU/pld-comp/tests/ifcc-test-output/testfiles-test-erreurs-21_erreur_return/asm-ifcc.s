.globl    main
 main: 
    #prologue
    pushq %rbp
    movq %rsp, %rbp
    movl    $2, -8(%rbp)
    movl    -4(%rbp), %eax
    imul    -8(%rbp), %eax
    movl    %eax, -12(%rbp)
    movl    $2, -16(%rbp)
    movl    -12(%rbp), %eax
    addl    -16(%rbp), %eax
    movl    %eax, -20(%rbp)
    movl    -20(%rbp), %eax
    movl    %eax, -4(%rbp)
    movl    -4(%rbp), %eax
    #epilogue
    popq %rbp
    ret
