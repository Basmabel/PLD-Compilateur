	.file	"input.c"
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	$0, -12(%rbp)
	movl	$0, -8(%rbp)
	cmpl	$1, -12(%rbp)
	je	.L2
	movl	$1, -8(%rbp)
	cmpl	$2, -12(%rbp)
	jne	.L3
	movl	$2, -8(%rbp)
	jmp	.L4
.L3:
	movl	$0, -8(%rbp)
	movl	-12(%rbp), %eax
	leal	8(%rax), %edx
	movl	-8(%rbp), %eax
	addl	%edx, %eax
	movl	%eax, -4(%rbp)
	cmpl	$0, -4(%rbp)
	je	.L5
	addl	$2, -8(%rbp)
	jmp	.L6
.L5:
	addl	$2, -12(%rbp)
.L6:
	movl	$10, -12(%rbp)
	jmp	.L4
.L2:
	addl	$3, -8(%rbp)
.L4:
	movl	-12(%rbp), %edx
	movl	-8(%rbp), %eax
	addl	%eax, %edx
	movl	-4(%rbp), %eax
	addl	%edx, %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 9.3.0-17ubuntu1~20.04) 9.3.0"
	.section	.note.GNU-stack,"",@progbits
	.section	.note.gnu.property,"a"
	.align 8
	.long	 1f - 0f
	.long	 4f - 1f
	.long	 5
0:
	.string	 "GNU"
1:
	.align 8
	.long	 0xc0000002
	.long	 3f - 2f
2:
	.long	 0x3
3:
	.align 8
4:
