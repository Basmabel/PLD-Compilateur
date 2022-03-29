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
	movl	-12(%rbp), %eax
	shll	$1, %eax
	movl	-8(%rbp), %ecx
	addl	-16(%rbp), %ecx
	imull	%ecx, %eax
	movl	-20(%rbp), %ecx
	addl	$10, %ecx
	imull	%ecx, %eax
	movl	%eax, -24(%rbp)
	movl	-24(%rbp), %eax
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
.subsections_via_symbols
