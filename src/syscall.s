.global sys_exit
.global sys_write
.global sys_sleep

sys_exit:
    mov $60, %rax # exit=60
    # rdi already has the first argument
    syscall

sys_write:
    mov $1, %rax # write=1
    # rdi, rsi, rdx already have fd, buf, len
    syscall
    ret

sys_sleep:
    mov $35, %rax # nanosleep=35
    syscall
    ret
