.globl    main
 main: 
    #prologue
    pushq %rbp
    movq %rsp, %rbp
    movq    $42, -72(%rbp)
    movq    -72(%rbp), %rax
    #epilogue
    popq %rbp
    ret
