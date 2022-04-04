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
	cmpl	$1, -8(%rbp)
	je	LBB0_8
## %bb.1:
	movl	$1, -12(%rbp)
	cmpl	$2, -8(%rbp)
	jne	LBB0_3
## %bb.2:
	movl	$2, -12(%rbp)
	jmp	LBB0_7
LBB0_3:
	movl	$0, -12(%rbp)
	movl	-8(%rbp), %eax
	addl	$10, %eax
	subl	$2, %eax
	movl	%eax, -24(%rbp)                 ## 4-byte Spill
	movl	-12(%rbp), %eax
	cltd
	movl	$1, %ecx
	idivl	%ecx
	movl	%eax, %ecx
	movl	-24(%rbp), %eax                 ## 4-byte Reload
	addl	%ecx, %eax
	movl	%eax, -16(%rbp)
	cmpl	$0, %eax
	je	LBB0_5
## %bb.4:
	movl	-12(%rbp), %eax
	addl	$2, %eax
	movl	%eax, -12(%rbp)
	jmp	LBB0_6
LBB0_5:
	movl	-8(%rbp), %eax
	addl	$2, %eax
	movl	%eax, -8(%rbp)
LBB0_6:
	movl	$10, -8(%rbp)
LBB0_7:
	jmp	LBB0_9
LBB0_8:
	movl	-12(%rbp), %eax
	addl	$3, %eax
	movl	%eax, -12(%rbp)
LBB0_9:
	movl	-8(%rbp), %eax
	addl	-12(%rbp), %eax
	addl	-16(%rbp), %eax
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
.subsections_via_symbols
