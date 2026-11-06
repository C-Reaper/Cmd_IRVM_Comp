;
; Entry Program for IRVM Code
; Owner: Codeleaded
;

bits 64

global _start
extern f.main

section .text

_start:
	call f.main
	mov	rdi,rax
	mov	rax,60
	syscall
