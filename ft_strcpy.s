section .text 
		global _ft_strcpy
_ft_strcpy:
		mov rdx, 0
		mov rcx, 0
		mov r8, 0
_ft_strcpy_loop:
		cmp BYTE [rsi +r8],0 ;campare src to the null
		je _loopend
		mov dl ,[rsi + r8] ; src rsi
		mov BYTE [rdi +r8] ,dl ;move src byte to dest rdi
		inc r8
		jmp _ft_strcpy_loop
_loopend:
	mov BYTE  [rax + r8],0
	ret
_end:
	mov rax, rdx
	mov BYTE  [rax + r8],0
	ret

