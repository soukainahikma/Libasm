section .text 
		global _ft_strcmp
_ft_strcmp:
	mov rax, 0
	mov rdx, 0
	mov rcx, 0
_ft_strcmp_loop:
	cmp BYTE [rdi +rax],0
	je _null2
	cmp BYTE [rsi +rax],0
	je _null1
	mov cl ,[rdi + rax]
	mov dl ,[rsi + rax]
	cmp rcx,rdx
	jne _end
	inc rax
	jmp _ft_strcmp_loop
_null1:
	mov cl ,[rdi + rax]
	jmp _end
_null2:
	cmp BYTE [rsi +rax],0
	je _end
	mov dl ,[rsi + rax]
	jmp _end
_end:
	sub rcx, rdx
	mov rax,rcx
	ret