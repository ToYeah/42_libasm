section .text
global ft_write
extern __errno_location

section .data
ft_write:

    xor rax, rax
    mov rax, 1
    syscall
    cmp rax, 0
    jl .error
    ret

.error:
    mov rdx, rax
    call __errno_location wrt ..plt
    neg rdx
    mov [rax], rdx
    mov rax, -1
    ret