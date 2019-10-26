	section .data

	message db "Hello, Holberton!", 10

	section .text

	global _main

_main:
	mov rax, 1
	mov rdi, 1
	mov rsi, message
	mov rdx, 14
	syscall
