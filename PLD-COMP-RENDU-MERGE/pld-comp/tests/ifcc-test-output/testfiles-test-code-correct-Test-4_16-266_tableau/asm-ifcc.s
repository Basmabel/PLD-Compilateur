.globl    main
 main: 
    #prologue
    pushq %rbp
    movq %rsp, %rbp
    movq    $42, -368(%rbp)
    movq    -368(%rbp), %rax
    #epilogue
    popq %rbp
    ret
