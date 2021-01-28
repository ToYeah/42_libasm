section .text
global ft_strcmp

section .data
ft_strcmp:
    xor rcx, rcx; rcx = 0
    xor rax, rax; rax = 0

.loop_start:
    mov al, byte [rdi + rcx]; al = s1[rcx]
    cmp al, byte [rsi + rcx]; if(al == s2[rcx])
    jne .end_loop_err; al != s2
    cmp byte[rdi + rcx], 0; if(s1[rcx] == 0)
    je .end_loop_suc
    inc rcx; rcx++
    jmp .loop_start

.end_loop_suc:
    xor rax, rax; rax = 0
    ret

.end_loop_err:
    xor rax, rax
    mov dil, byte [rdi + rcx]; dil = s1[rcx]
    mov sil, byte [rsi + rcx]; sil = s2[rcx]
    cmp dil, sil
    jb .end_smaller; if(dil < sil)
.end_bigger:
    add eax, 1
    ret

.end_smaller:
    sub eax, 1
    ret
