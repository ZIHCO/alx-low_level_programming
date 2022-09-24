section .text
global main

main:
	mov rax, 1 ; set write to command
	mov rdi, 1 ; msg to destination index
	mov rsi, msg ; msg to source index
	mov rdx, msglen ; put length in rdx
	syscall ; call kernel

	mov rax, 60 ; set syscall number to 60(0x3c)
	mov rdi, 0 ; set input source to 0 stdin
	syscall ; call kernel

section .rodata
	msg: db "Hello, Holberton", 10 ; string to write (0xa)
	msglen: equ $ - msg ; get the string length
