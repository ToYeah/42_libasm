section .text
global ft_strcmp

section .data
ft_strcmp:
    xor rcx, rcx
    xor rax, rax

.loop_start:
    mov al, byte [rdi + rcx]
    cmp al, byte [rsi + rcx]
    jne .end_loop_err
    cmp byte[rdi + rcx], 0
    je .end_loop_suc
    inc rcx
    jmp .loop_start

.end_loop_suc:
    xor rax, rax
    ret

.end_loop_err:
    xor rax, rax
    mov dil, byte [rdi + rcx]
    mov sil, byte [rsi + rcx]
    cmp dil, sil
    jb .end_smaller
.end_bigger:
    add eax, 1
    ret

.end_smaller:
    sub eax, 1
    ret
