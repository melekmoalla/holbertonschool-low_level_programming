section .data
    msg db 'Hello World'
    len equ $ - msg

section .text
    global _start

_start:
    MOV rdi, 1 ; stdin fd
    MOV rsi, msg
    MOV rdx, len
    MOV rax, 1 ; write syscall
    INT 0x80