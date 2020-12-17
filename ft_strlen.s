section .text 
        global _ft_strlen
_ft_strlen:
        mov rax, 0
_loop:
    cmp [rdi + rax], byte 0
    je _loopend
    inc rax
    jne _loop
_loopend:
    ret
;ask abt rcx and rdi