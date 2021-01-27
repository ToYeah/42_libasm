section .text
global ft_read
extern __errno_location
section .data
ft_read:

    xor rax, rax
    mov rax, 0
    syscall
    cmp rax, 0
    jl .error
    ret

.error:
    neg rax
    push rax
    call __errno_location wrt ..plt
    pop qword[rax]
    mov rax, -1
    ret
