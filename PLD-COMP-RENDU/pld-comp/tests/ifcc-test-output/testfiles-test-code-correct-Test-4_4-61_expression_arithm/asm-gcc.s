	.section	__TEXT,__text,regular,pure_instructions
	.build_version macos, 11, 0	sdk_version 12, 1
	.globl	_main                           ## -- Begin function main
	.p2align	4, 0x90
_main:                                  ## @main
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movl	$0, -4(%rbp)
	movl	$1, -8(%rbp)
	movl	$2, -12(%rbp)
	movl	$3, -16(%rbp)
	movl	$4, -20(%rbp)
	imull	$10, -8(%rbp), %eax
	shll	$1, %eax
	imull	-12(%rbp), %eax
	movl	-16(%rbp), %ecx
	shll	$1, %ecx
	imull	$10, %ecx, %ecx
	addl	%ecx, %eax
	cltd
	idivl	-20(%rbp)
	movl	%eax, -24(%rbp)
	movl	-24(%rbp), %eax
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
.subsections_via_symbols
