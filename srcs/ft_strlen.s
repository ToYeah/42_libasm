section .text
global ft_strlen

section .data
ft_strlen: 
    xor rcx, rcx; rcx = 0
.loop_start:
    cmp byte[rdi + rcx], 0
    je .end_loop; if([rdi + rcx] == 0)
    inc rcx; rcx++
    jmp .loop_start

.end_loop:
    mov rax, rcx; rax = rcx
    ret