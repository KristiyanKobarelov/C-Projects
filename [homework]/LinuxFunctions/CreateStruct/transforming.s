	.file	"transformation.c"
	.text
	.section	.rodata.str1.1,"aMS",@progbits,1
.LC0:
	.string	"%d\n"
	.text
	.p2align 4
	.globl	transform
	.type	transform, @function
transform:
.LFB35:
	.cfi_startproc
	pushq	%r12
	.cfi_def_cfa_offset 16
	.cfi_offset 12, -16
	addq	$-128, %rsp
	.cfi_def_cfa_offset 144
	movq	%fs:40, %rax
	movq	%rax, 120(%rsp)
	xorl	%eax, %eax
	movsbl	(%rdi), %eax
	testb	%al, %al
	je	.L2
	xorl	%ecx, %ecx
	.p2align 4,,10
	.p2align 3
.L3:
	addl	$1, %ecx
	movslq	%ecx, %rsi
	cmpb	$0, (%rdi,%rsi)
	jne	.L3
	xorl	%ecx, %ecx
	.p2align 4,,10
	.p2align 3
.L4:
	leal	(%rdx,%rdx,4), %edx
	addl	$1, %ecx
	leal	-48(%rax,%rdx,2), %edx
	movslq	%ecx, %rax
	movsbl	(%rdi,%rax), %eax
	testb	%al, %al
	jne	.L4
.L2:
	movslq	%edx, %r12
	xorl	%esi, %esi
	leaq	8(%rsp), %rdi
	movl	$100, %edx
	movq	%r12, (%rsp)
	call	__strcpy_chk@PLT
	movq	120(%rsp), %rax
	subq	%fs:40, %rax
	jne	.L14
	subq	$-128, %rsp
	.cfi_remember_state
	.cfi_def_cfa_offset 16
	movq	%r12, %rdx
	leaq	.LC0(%rip), %rsi
	xorl	%eax, %eax
	movl	$1, %edi
	popq	%r12
	.cfi_def_cfa_offset 8
	jmp	__printf_chk@PLT
.L14:
	.cfi_restore_state
	call	__stack_chk_fail@PLT
	.cfi_endproc
.LFE35:
	.size	transform, .-transform
	.ident	"GCC: (GNU) 11.3.0"
	.section	.note.GNU-stack,"",@progbits
