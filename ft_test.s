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
    call malloc wrt ..plt
    pop rdi
    call ft_strcpy
    ret
