section .text
global ft_strcpy

section .data
ft_strcpy:
    xor rcx, rcx
    xor rax, rax

.loop_start:
    cmp byte [rsi + rcx], 0
    je .end_loop
    mov al, byte [rsi + rcx]
    mov byte [rdi + rcx], al
    inc rcx
    jmp .loop_start

.end_loop:
    mov byte [rdi + rcx], 0
    mov rax, rdi
    ret