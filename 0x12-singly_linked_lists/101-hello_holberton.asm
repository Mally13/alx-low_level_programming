;64-bit program in assembly that prints Hello, Holberton
;follewed by a new line

extern printf

section .data
	format db "Hello, Holberton", 0x0A, 0

section .text
	global main

main:
	sub rsp, 8

	mov edi, format
	xor eax, eax
	call printf

	add rsp, 8
	mov eax, 60
	xor edi, edi
	syscall
