.globl    main
 main: 
    #prologue
    pushq %rbp
    movq %rsp, %rbp
    movl    $1, -24(%rbp)
    movl    -24(%rbp), %eax
    movl    %eax, -4(%rbp)
    movl    $2, -28(%rbp)
    movl    -28(%rbp), %eax
    movl    %eax, -8(%rbp)
    movl    $3, -32(%rbp)
    movl    -32(%rbp), %eax
    movl    %eax, -12(%rbp)
    movl    $4, -36(%rbp)
    movl    -36(%rbp), %eax
    movl    %eax, -16(%rbp)
    movl    $2, -40(%rbp)
    movl    $2, -44(%rbp)
    movl    -4(%rbp), %eax
    addl    -44(%rbp), %eax
    movl    %eax, -48(%rbp)
    movl    -48(%rbp), %eax
    imul    -40(%rbp), %eax
    movl    %eax, -52(%rbp)
    movl    $5, -56(%rbp)
    movl    -8(%rbp), %eax
    imul    -56(%rbp), %eax
    movl    %eax, -60(%rbp)
    movl    $2, -64(%rbp)
    movl    -64(%rbp), %eax
    imul    -60(%rbp), %eax
    movl    %eax, -68(%rbp)
    movl    -52(%rbp), %eax
    addl    -68(%rbp), %eax
    movl    %eax, -72(%rbp)
    movl    $3, -76(%rbp)
    movl    $3, -80(%rbp)
    movl    -12(%rbp), %eax
    addl    -80(%rbp), %eax
    movl    %eax, -84(%rbp)
    movl    -84(%rbp), %eax
    imul    -76(%rbp), %eax
    movl    %eax, -88(%rbp)
    movl    -88(%rbp), %eax
    addl    -16(%rbp), %eax
    movl    %eax, -92(%rbp)
    movl    -72(%rbp), %eax
    cltd
 	 idivl    -92(%rbp)
    movl    %eax, -96(%rbp)
    movl    -96(%rbp), %eax
    movl    %eax, -20(%rbp)
    movl    -20(%rbp), %eax
    #epilogue
    popq %rbp
    ret
