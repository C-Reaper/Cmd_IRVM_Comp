;
; Entry Program for IRVM Code
; Owner: Codeleaded
;

bits 64

global _start
extern f.main

section .text

_start:
	mov rbp,rsp
	call f.main
	;mov rax,69
	mov	rdi,rax
	mov	rax,60
	syscall
