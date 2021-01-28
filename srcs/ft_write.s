section .text
global ft_write
extern __errno_location

section .data
ft_write:

    xor rax, rax; rax = 0
    mov rax, 1; rax = 1(syscall write = 1)
    syscall
    cmp rax, 0
    jl .error; if(rax < 0)
    ret

.error:
    neg rax; rax *= -1
    push rax
    call __errno_location wrt ..plt; rax = errno address
    pop qword[rax]; *errno address = errno
    xor rax, rax; rax = 0
    sub eax, 1; eax--
    ret