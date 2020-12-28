section .text 
		global _ft_strcpy

_ft_strcpy:
		mov r8, 0
_ft_strcpy_loop:
		cmp  byte[rsi +r8],0
		je _end
		mov cl ,[rsi + r8]
		mov  byte[rdi +r8] ,cl
		inc r8
		jmp _ft_strcpy_loop
_end:
	mov byte [rdi + r8],0
	mov rax , rdi
	ret

