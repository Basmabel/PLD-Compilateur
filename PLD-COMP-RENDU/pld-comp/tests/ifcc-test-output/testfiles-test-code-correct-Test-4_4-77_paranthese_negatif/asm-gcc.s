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
	xorl	%eax, %eax
	movl	$0, -4(%rbp)
	movl	$5, -12(%rbp)
	movl	-12(%rbp), %ecx
	addl	$5, %ecx
	movl	%ecx, -8(%rbp)
	subl	-8(%rbp), %eax
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
.subsections_via_symbols
