global _start
section .data
	my_str db "Hello, Holberton", 0x0a
	len equ $ - my_str
section .text
_start:
	mov eax,4
	mov ebx,1
	mov ecx, my_str
	mov edx, len
	int 0x80
	mov eax, 1
	mov ebx, 0
	int 0x80
