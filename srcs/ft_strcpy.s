section .text
global ft_strcpy

section .data
ft_strcpy:
    xor rcx, rcx; rcx = 0
    xor rax, rax; rax = 0

.loop_start:
    cmp byte [rsi + rcx], 0
    je .end_loop; if(rsi[rcx] == 0)
    mov al, byte [rsi + rcx]; al = rsi[rcx]
    mov byte [rdi + rcx], al; rdi[rcx] = al
    inc rcx; rcx++
    jmp .loop_start

.end_loop:
    mov byte [rdi + rcx], 0; rdi[rcx] = 0
    mov rax, rdi; rax = rdi
    ret