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
	movl	$3, -12(%rbp)
	cmpl	$4, -8(%rbp)
	jne	LBB0_2
## %bb.1:
	movl	$1, -12(%rbp)
	jmp	LBB0_3
LBB0_2:
	movl	$2, -12(%rbp)
LBB0_3:
	movl	-12(%rbp), %eax
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
.subsections_via_symbols
