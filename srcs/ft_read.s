section .text
global ft_read
extern __errno_location
section .data
ft_read:
    mov rax, 0; rax = 0(syscall read = 0)
    syscall
    cmp rax, 0; if(rax < 0)
    jl .error; rax < 0
    ret; rax >= 0

.error:
    neg rax; rax *= -1
    push rax
    call __errno_location wrt ..plt; rax = errno address
    pop qword[rax]; *errno address = errno
    mov rax, -1; rax = -1
    ret
