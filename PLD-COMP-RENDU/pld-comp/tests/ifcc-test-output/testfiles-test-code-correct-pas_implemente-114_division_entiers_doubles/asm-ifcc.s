.globl    main
 main: 
    #prologue
    pushq %rbp
    movq %rsp, %rbp
    movl    $24, -4(%rbp)
    movl    -4(%rbp), %eax
    #epilogue
    popq %rbp
    ret
