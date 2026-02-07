.global _start

_start:
    call main

    mov %rax, %rdi # put rax(return value) into rdi(first argument of a syscall) 
    mov $60, %rax
    syscall