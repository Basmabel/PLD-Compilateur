.globl    main
 main: 
    #prologue
    pushq %rbp
    movq %rsp, %rbp
    movq    $55, -8(%rbp)
    movq    -8(%rbp), %rax
    #epilogue
    popq %rbp
    ret
