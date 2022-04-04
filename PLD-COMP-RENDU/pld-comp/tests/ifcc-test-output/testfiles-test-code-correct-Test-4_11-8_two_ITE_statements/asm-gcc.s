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
	movl	$0, -8(%rbp)
	movl	$0, -12(%rbp)
	movl	-8(%rbp), %eax
	addl	$4, %eax
	movl	%eax, -8(%rbp)
	cmpl	$0, %eax
	je	LBB0_2
## %bb.1:
	movl	-12(%rbp), %eax
	addl	$2, %eax
	movl	%eax, -12(%rbp)
	jmp	LBB0_3
LBB0_2:
	movl	-12(%rbp), %eax
	addl	$3, %eax
	movl	%eax, -12(%rbp)
LBB0_3:
	xorl	%eax, %eax
                                        ## kill: def $al killed $al killed $eax
	movl	-12(%rbp), %ecx
	addl	$1, %ecx
	movl	%ecx, -12(%rbp)
	movl	$0, -8(%rbp)
	testb	$1, %al
	jne	LBB0_4
	jmp	LBB0_5
LBB0_4:
	movl	$10, -12(%rbp)
	jmp	LBB0_6
LBB0_5:
	movl	$0, -12(%rbp)
LBB0_6:
	movl	$10, -12(%rbp)
	movl	-8(%rbp), %eax
	addl	-12(%rbp), %eax
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
.subsections_via_symbols
