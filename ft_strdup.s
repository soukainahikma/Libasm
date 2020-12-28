extern   _ft_strlen
extern   _malloc
extern   _ft_strcpy
section .text 
		global _ft_strdup
_ft_strdup:
        cmp rdi,0
        jz _end
        call _ft_strlen
        add rax,1
        push rdi
        mov rdi, rax
        call _malloc
        mov rdi, rax
        pop rsi
        call _ft_strcpy
        ret
_end:
	mov rax, 0
	ret 

