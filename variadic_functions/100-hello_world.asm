global _start

section .text:

_start:
  mov eax, 0x4      ; write(
  mov ebx, 1        ;   STDOUT_FILENO,
  mov ecx, msg      ;   "Hello, world\n",
  mov edx, msglen   ;   sizeof("Hello, world!\n")
  int 0x80           ; invoke

  mov reax, 60       ; exit(
  mov ebx, 0        ;   EXIT_SUCCESS
  int 0x80           ; );

section .data:
  msg: db "Hello, world", 0xA
  msglen: equ $ - msg