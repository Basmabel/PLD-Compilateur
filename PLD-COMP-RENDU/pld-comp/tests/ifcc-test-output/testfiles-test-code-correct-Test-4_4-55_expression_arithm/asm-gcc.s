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
	movl	$2, -8(%rbp)
	movl	$4, -12(%rbp)
	movl	$10, %eax
	cltd
	idivl	-8(%rbp)
	movl	%eax, -20(%rbp)                 ## 4-byte Spill
	movl	-12(%rbp), %eax
	shll	$1, %eax
	cltd
	movl	$4, %ecx
	idivl	%ecx
	movl	%eax, %ecx
	movl	-20(%rbp), %eax                 ## 4-byte Reload
	addl	%ecx, %eax
	movl	%eax, -16(%rbp)
	movl	-16(%rbp), %eax
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
.subsections_via_symbols
