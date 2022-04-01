.globl    main
 main: 
    #prologue
    pushq %rbp
    movq %rsp, %rbp
    movl    -4(%rbp), %eax
    addl    -8(%rbp), %eax
    movl    %eax, -16(%rbp)
    movl    -16(%rbp), %eax
    addl    -12(%rbp), %eax
    movl    %eax, -20(%rbp)
    movl    -20(%rbp), %eax
    #epilogue
    popq %rbp
    ret
