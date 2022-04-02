.globl    main
 main: 
    #prologue
    pushq %rbp
    movq %rsp, %rbp
    movq    $42, -168(%rbp)
    movq    -168(%rbp), %rax
    #epilogue
    popq %rbp
    ret
