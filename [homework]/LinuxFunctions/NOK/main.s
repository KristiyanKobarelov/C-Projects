	.file	"main.c"
	.text
	.p2align 4
	.globl	nod
	.type	nod, @function
nod:
.LFB23:
	.cfi_startproc
	movl	%edi, %eax
	movl	%esi, %edx
	testl	%esi, %esi
	je	.L4
	.p2align 4,,10
	.p2align 3
.L3:
	movl	%edx, %r8d
	cltd
	idivl	%r8d
	movl	%r8d, %eax
	testl	%edx, %edx
	jne	.L3
	movl	%r8d, %eax
	ret
	.p2align 4,,10
	.p2align 3
.L4:
	movl	%edi, %r8d
	movl	%r8d, %eax
	ret
	.cfi_endproc
.LFE23:
	.size	nod, .-nod
	.p2align 4
	.globl	nok
	.type	nok, @function
nok:
.LFB24:
	.cfi_startproc
	pushq	%rbx
	.cfi_def_cfa_offset 16
	.cfi_offset 3, -16
	movl	%edi, %ebx
	imull	%esi, %ebx
	call	nod@PLT
	movl	%eax, %r8d
	movl	%ebx, %eax
	popq	%rbx
	.cfi_def_cfa_offset 8
	cltd
	idivl	%r8d
	ret
	.cfi_endproc
.LFE24:
	.size	nok, .-nok
	.section	.rodata.str1.8,"aMS",@progbits,1
	.align 8
.LC0:
	.string	"The least common multiple is: %d\n"
	.section	.text.startup,"ax",@progbits
	.p2align 4
	.globl	main
	.type	main, @function
main:
.LFB25:
	.cfi_startproc
	subq	$8, %rsp
	.cfi_def_cfa_offset 16
	movl	$18, %esi
	movl	$12, %edi
	call	nok@PLT
	movl	$18, %ecx
	movl	$12, %edx
	leaq	.LC0(%rip), %rsi
	movl	%eax, %r8d
	movl	$1, %edi
	xorl	%eax, %eax
	call	__printf_chk@PLT
	xorl	%eax, %eax
	addq	$8, %rsp
	.cfi_def_cfa_offset 8
	ret
	.cfi_endproc
.LFE25:
	.size	main, .-main
	.ident	"GCC: (GNU) 11.3.0"
	.section	.note.GNU-stack,"",@progbits
