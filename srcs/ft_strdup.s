section .text
    extern ft_strlen
    extern ft_strcpy
    extern malloc
    global ft_strdup
section .data
ft_strdup: 
    push rdi
    call ft_strlen
    mov rdi, rax
    inc rdi
    mov rax, 1
    call malloc wrt ..plt
    cmp rax, 0
    pop rsi
    mov rdi, rax
    call ft_strcpy
    ret

.error:
    ret
