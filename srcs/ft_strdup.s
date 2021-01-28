section .text
    extern ft_strlen
    extern ft_strcpy
    extern malloc
    global ft_strdup
section .data
ft_strdup: 
    push rdi
    call ft_strlen; rax = ftstrlen(rdi)
    mov rdi, rax; rdi = rax
    inc rdi; rdi++
    call malloc wrt ..plt; rax = malloc(rdi)
    pop rsi; rsi = s
    cmp rax, 0
    je .error; if(rax == NULL)
    mov rdi, rax; rdi = rax
    call ft_strcpy; ft_strcpy(rdi, rsi)
    ret

.error:
    ret
