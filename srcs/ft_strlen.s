section .text
global ft_strlen

section .data
ft_strlen: 
    xor rcx, rcx
.loop_start:
    cmp byte[rdi + rcx], 0
    je .end_loop
    inc rcx
    jmp .loop_start

.end_loop:

    mov rax, rcx
    ret