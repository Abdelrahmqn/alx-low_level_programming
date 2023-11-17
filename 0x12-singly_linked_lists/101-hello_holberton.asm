global    _start

section   .text
_start:   
    mov     rax, 1                 ; System call number for sys_write
    mov     rdi, 1                 ; File descriptor 1: stdout
    mov     rsi, message           ; Address of the message
    mov     rdx, message_length    ; Length of the message
    syscall                       ; Invoke sys_write

    mov     rax, 60                ; System call number for sys_exit
    xor     rdi, rdi               ; Exit code 0
    syscall                        ; Invoke sys_exit

section   .data
message:  db        "Hello, Holberton", 10   ; Message with newline (10)
message_length equ $ - message           ; Calculate the length of the message

