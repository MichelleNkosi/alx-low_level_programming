section .data
    ; The format string to be used with printf
    format db 'Hello, Holberton', 10, 0  ; 10 is the newline character, 0 is the null terminator

section .text
    extern printf
    global main

main:
    ; Set up the arguments for printf
    mov rdi, format        ; Address of the format string (first argument)
    mov rax, 0             ; Number of floating-point arguments (0 in this case)

    ; Call printf
    call printf

    ; Exit the program
    mov rax, 60            ; syscall: exit
    xor rdi, rdi           ; status: 0
    syscall
