	.file	"plain.cpp"
	.local	_ZStL8__ioinit
	.comm	_ZStL8__ioinit,1,1
	.globl	a
	.bss
	.align 4
	.type	a, @object
	.size	a, 4
a:
	.zero	4
	.section	.text._ZN5Shape4areaEv,"axG",@progbits,_ZN5Shape4areaEv,comdat
	.align 2
	.weak	_ZN5Shape4areaEv
	.type	_ZN5Shape4areaEv, @function
_ZN5Shape4areaEv:
.LFB971:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movl	$0, %eax
	movq	%rax, -16(%rbp)
	movsd	-16(%rbp), %xmm0
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE971:
	.size	_ZN5Shape4areaEv, .-_ZN5Shape4areaEv
	.section	.text._ZN5ShapeC2Ev,"axG",@progbits,_ZN5ShapeC5Ev,comdat
	.align 2
	.weak	_ZN5ShapeC2Ev
	.type	_ZN5ShapeC2Ev, @function
_ZN5ShapeC2Ev:
.LFB974:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSsC1Ev
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE974:
	.size	_ZN5ShapeC2Ev, .-_ZN5ShapeC2Ev
	.weak	_ZN5ShapeC1Ev
	.set	_ZN5ShapeC1Ev,_ZN5ShapeC2Ev
	.section	.text._ZN5ShapeD2Ev,"axG",@progbits,_ZN5ShapeD5Ev,comdat
	.align 2
	.weak	_ZN5ShapeD2Ev
	.type	_ZN5ShapeD2Ev, @function
_ZN5ShapeD2Ev:
.LFB977:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSsD1Ev
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE977:
	.size	_ZN5ShapeD2Ev, .-_ZN5ShapeD2Ev
	.weak	_ZN5ShapeD1Ev
	.set	_ZN5ShapeD1Ev,_ZN5ShapeD2Ev
	.section	.text._ZN6CircleC2Ed,"axG",@progbits,_ZN6CircleC5Ed,comdat
	.align 2
	.weak	_ZN6CircleC2Ed
	.type	_ZN6CircleC2Ed, @function
_ZN6CircleC2Ed:
.LFB979:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movsd	%xmm0, -16(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN5ShapeC2Ev
	movq	-8(%rbp), %rdx
	movq	-16(%rbp), %rax
	movq	%rax, 8(%rdx)
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE979:
	.size	_ZN6CircleC2Ed, .-_ZN6CircleC2Ed
	.weak	_ZN6CircleC1Ed
	.set	_ZN6CircleC1Ed,_ZN6CircleC2Ed
	.section	.text._ZN6Circle4areaEv,"axG",@progbits,_ZN6Circle4areaEv,comdat
	.align 2
	.weak	_ZN6Circle4areaEv
	.type	_ZN6Circle4areaEv, @function
_ZN6Circle4areaEv:
.LFB981:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movsd	8(%rax), %xmm1
	movsd	.LC1(%rip), %xmm0
	mulsd	%xmm1, %xmm0
	movq	-8(%rbp), %rax
	movsd	8(%rax), %xmm1
	mulsd	%xmm1, %xmm0
	movsd	%xmm0, -16(%rbp)
	movq	-16(%rbp), %rax
	movq	%rax, -16(%rbp)
	movsd	-16(%rbp), %xmm0
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE981:
	.size	_ZN6Circle4areaEv, .-_ZN6Circle4areaEv
	.section	.text._ZN6SquareC2Ed,"axG",@progbits,_ZN6SquareC5Ed,comdat
	.align 2
	.weak	_ZN6SquareC2Ed
	.type	_ZN6SquareC2Ed, @function
_ZN6SquareC2Ed:
.LFB983:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movsd	%xmm0, -16(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN5ShapeC2Ev
	movq	-8(%rbp), %rdx
	movq	-16(%rbp), %rax
	movq	%rax, 8(%rdx)
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE983:
	.size	_ZN6SquareC2Ed, .-_ZN6SquareC2Ed
	.weak	_ZN6SquareC1Ed
	.set	_ZN6SquareC1Ed,_ZN6SquareC2Ed
	.section	.text._ZN6Square4areaEv,"axG",@progbits,_ZN6Square4areaEv,comdat
	.align 2
	.weak	_ZN6Square4areaEv
	.type	_ZN6Square4areaEv, @function
_ZN6Square4areaEv:
.LFB985:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movsd	8(%rax), %xmm1
	movq	-8(%rbp), %rax
	movsd	8(%rax), %xmm0
	mulsd	%xmm1, %xmm0
	movsd	%xmm0, -16(%rbp)
	movq	-16(%rbp), %rax
	movq	%rax, -16(%rbp)
	movsd	-16(%rbp), %xmm0
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE985:
	.size	_ZN6Square4areaEv, .-_ZN6Square4areaEv
	.section	.text._ZN6CircleD2Ev,"axG",@progbits,_ZN6CircleD5Ev,comdat
	.align 2
	.weak	_ZN6CircleD2Ev
	.type	_ZN6CircleD2Ev, @function
_ZN6CircleD2Ev:
.LFB988:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN5ShapeD2Ev
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE988:
	.size	_ZN6CircleD2Ev, .-_ZN6CircleD2Ev
	.weak	_ZN6CircleD1Ev
	.set	_ZN6CircleD1Ev,_ZN6CircleD2Ev
	.section	.text._ZN6SquareD2Ev,"axG",@progbits,_ZN6SquareD5Ev,comdat
	.align 2
	.weak	_ZN6SquareD2Ev
	.type	_ZN6SquareD2Ev, @function
_ZN6SquareD2Ev:
.LFB991:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN5ShapeD2Ev
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE991:
	.size	_ZN6SquareD2Ev, .-_ZN6SquareD2Ev
	.weak	_ZN6SquareD1Ev
	.set	_ZN6SquareD1Ev,_ZN6SquareD2Ev
	.section	.rodata
	.align 8
.LC3:
	.string	"Circle's area (through shape)  = "
	.align 8
.LC4:
	.string	"Circle's area (through circle) = "
	.align 8
.LC6:
	.string	"Square's area (through shape)  = "
	.align 8
.LC7:
	.string	"Square's area (through square) = "
	.text
	.globl	main
	.type	main, @function
main:
.LFB986:
	.cfi_startproc
	.cfi_personality 0x3,__gxx_personality_v0
	.cfi_lsda 0x3,.LLSDA986
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$88, %rsp
	.cfi_offset 3, -24
	movl	%edi, -68(%rbp)
	movq	%rsi, -80(%rbp)
	movabsq	$4611686018427387904, %rax
	leaq	-48(%rbp), %rdx
	movq	%rax, -88(%rbp)
	movsd	-88(%rbp), %xmm0
	movq	%rdx, %rdi
.LEHB0:
	call	_ZN6CircleC1Ed
.LEHE0:
	leaq	-48(%rbp), %rax
	movq	%rax, -64(%rbp)
	movq	-64(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN5Shape4areaEv
	movsd	%xmm0, -88(%rbp)
	movq	-88(%rbp), %rbx
	movl	$.LC3, %esi
	movl	$_ZSt4cout, %edi
.LEHB1:
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movq	%rbx, -88(%rbp)
	movsd	-88(%rbp), %xmm0
	movq	%rax, %rdi
	call	_ZNSolsEd
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E
	leaq	-48(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN6Circle4areaEv
	movsd	%xmm0, -88(%rbp)
	movq	-88(%rbp), %rbx
	movl	$.LC4, %esi
	movl	$_ZSt4cout, %edi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movq	%rbx, -88(%rbp)
	movsd	-88(%rbp), %xmm0
	movq	%rax, %rdi
	call	_ZNSolsEd
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E
	leaq	-32(%rbp), %rax
	movsd	.LC5(%rip), %xmm0
	movq	%rax, %rdi
	call	_ZN6SquareC1Ed
.LEHE1:
	leaq	-32(%rbp), %rax
	movq	%rax, -56(%rbp)
	movq	-56(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN5Shape4areaEv
	movsd	%xmm0, -88(%rbp)
	movq	-88(%rbp), %rbx
	movl	$.LC6, %esi
	movl	$_ZSt4cout, %edi
.LEHB2:
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movq	%rbx, -88(%rbp)
	movsd	-88(%rbp), %xmm0
	movq	%rax, %rdi
	call	_ZNSolsEd
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E
	leaq	-32(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN6Square4areaEv
	movsd	%xmm0, -88(%rbp)
	movq	-88(%rbp), %rbx
	movl	$.LC7, %esi
	movl	$_ZSt4cout, %edi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movq	%rbx, -88(%rbp)
	movsd	-88(%rbp), %xmm0
	movq	%rax, %rdi
	call	_ZNSolsEd
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E
.LEHE2:
	leaq	-32(%rbp), %rax
	movq	%rax, %rdi
.LEHB3:
	call	_ZN6SquareD1Ev
.LEHE3:
	leaq	-48(%rbp), %rax
	movq	%rax, %rdi
.LEHB4:
	call	_ZN6CircleD1Ev
.LEHE4:
	movl	$0, %eax
	jmp	.L22
.L21:
	movq	%rax, %rbx
	leaq	-32(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN6SquareD1Ev
	jmp	.L19
.L20:
	movq	%rax, %rbx
.L19:
	leaq	-48(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN6CircleD1Ev
	movq	%rbx, %rax
	movq	%rax, %rdi
.LEHB5:
	call	_Unwind_Resume
.LEHE5:
.L22:
	addq	$88, %rsp
	popq	%rbx
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE986:
	.globl	__gxx_personality_v0
	.section	.gcc_except_table,"a",@progbits
.LLSDA986:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE986-.LLSDACSB986
.LLSDACSB986:
	.uleb128 .LEHB0-.LFB986
	.uleb128 .LEHE0-.LEHB0
	.uleb128 0
	.uleb128 0
	.uleb128 .LEHB1-.LFB986
	.uleb128 .LEHE1-.LEHB1
	.uleb128 .L20-.LFB986
	.uleb128 0
	.uleb128 .LEHB2-.LFB986
	.uleb128 .LEHE2-.LEHB2
	.uleb128 .L21-.LFB986
	.uleb128 0
	.uleb128 .LEHB3-.LFB986
	.uleb128 .LEHE3-.LEHB3
	.uleb128 .L20-.LFB986
	.uleb128 0
	.uleb128 .LEHB4-.LFB986
	.uleb128 .LEHE4-.LEHB4
	.uleb128 0
	.uleb128 0
	.uleb128 .LEHB5-.LFB986
	.uleb128 .LEHE5-.LEHB5
	.uleb128 0
	.uleb128 0
.LLSDACSE986:
	.text
	.size	main, .-main
	.type	_Z41__static_initialization_and_destruction_0ii, @function
_Z41__static_initialization_and_destruction_0ii:
.LFB1039:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	%edi, -4(%rbp)
	movl	%esi, -8(%rbp)
	cmpl	$1, -4(%rbp)
	jne	.L23
	cmpl	$65535, -8(%rbp)
	jne	.L23
	movl	$_ZStL8__ioinit, %edi
	call	_ZNSt8ios_base4InitC1Ev
	movl	$__dso_handle, %edx
	movl	$_ZStL8__ioinit, %esi
	movl	$_ZNSt8ios_base4InitD1Ev, %edi
	call	__cxa_atexit
.L23:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1039:
	.size	_Z41__static_initialization_and_destruction_0ii, .-_Z41__static_initialization_and_destruction_0ii
	.type	_GLOBAL__sub_I_a, @function
_GLOBAL__sub_I_a:
.LFB1040:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	$65535, %esi
	movl	$1, %edi
	call	_Z41__static_initialization_and_destruction_0ii
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1040:
	.size	_GLOBAL__sub_I_a, .-_GLOBAL__sub_I_a
	.section	.init_array,"aw"
	.align 8
	.quad	_GLOBAL__sub_I_a
	.section	.rodata
	.align 8
	.type	_ZZL18__gthread_active_pvE20__gthread_active_ptr, @object
	.size	_ZZL18__gthread_active_pvE20__gthread_active_ptr, 8
_ZZL18__gthread_active_pvE20__gthread_active_ptr:
	.quad	_ZL28__gthrw___pthread_key_createPjPFvPvE
	.weakref	_ZL28__gthrw___pthread_key_createPjPFvPvE,__pthread_key_create
	.align 8
.LC1:
	.long	1374389535
	.long	1074339512
	.align 8
.LC5:
	.long	0
	.long	1072693248
	.hidden	__dso_handle
	.ident	"GCC: (Ubuntu 4.8.2-19ubuntu1) 4.8.2"
	.section	.note.GNU-stack,"",@progbits
