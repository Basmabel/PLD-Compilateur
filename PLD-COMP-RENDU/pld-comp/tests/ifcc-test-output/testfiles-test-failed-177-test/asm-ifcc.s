.globl    main
 main: 
    #prologue
    pushq %rbp
    movq %rsp, %rbp
    movq    $999999999999999999999999999999, -16(%rbp)
    movq    -16(%rbp), %rax
    movq    %rax, -8(%rbp)
    movq    -8(%rbp), %rax
    #epilogue
    popq %rbp
    ret
