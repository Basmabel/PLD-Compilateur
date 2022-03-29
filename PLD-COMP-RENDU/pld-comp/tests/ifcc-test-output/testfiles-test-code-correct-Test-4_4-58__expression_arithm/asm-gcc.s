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
	movl	$4, -8(%rbp)
	movl	$1, -12(%rbp)
	movl	$3, -16(%rbp)
	movl	-8(%rbp), %eax
	addl	-12(%rbp), %eax
	imull	$10, %eax, %eax
	imull	$3, -16(%rbp), %ecx
	imull	$20, %ecx, %ecx
	addl	$5, %ecx
	cltd
	idivl	%ecx
	movl	%eax, -20(%rbp)
	movl	-20(%rbp), %eax
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
.subsections_via_symbols
