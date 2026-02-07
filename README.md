# sammy-crt
My own simple C runtime using only syscalls and some assembly


## Notes
- Simple runtime targeting x86-64 linux
- zero dependencies
- linux kernel only

**Compile command:**
> `gcc -ffreestanding -nostdlib -nostartfiles -Iinclude -no-pie src/start.s src/syscall.s src/crt.c main.c -o test`

### Assembly Syntax
- `.global` - make a symbol visible to linker
- `mov` - copy value
- `call` - run a function
- `syscall` - enter kernel
registers
- `jmp` - jumps to an address
- `rax` - syscall number, or return value
- `rdi` - first argument

| C argument | Register |
| ---------- | -------- |
| 1st        | rdi      |
| 2nd        | rsi      |
| 3rd        | rdx      |
| 4th        | r10      |
| 5th        | r8       |
| 6th        | r9       |


### First step: implement exit(0) for '_start'
Put the syscall number for `exit`(which is 60) in register `rax`
Put the exit code(0) in `rdi`
Execute `syscall`


### Rahhh wahttt ts too ez
Implementing these syscall wrappers in C was soooo easy, as long as you have the arguments in the right order when calling the C function, you don't need to do any extra work in the assembly.
NEXT UP:
- more syscall wrappers(read, fork, execve, etc. check [this table](https://www.chromium.org/chromium-os/developer-library/reference/linux-constants/syscalls/) for all linux syscalls)
- implementing puts(idk how hard this will be, I think it just calls write)
- helpers(puts, printf, snprintf,strlen, memcpy, memset, strcpy, strncpy, strcmp, strncmp, strchr, atoi, itoa)
- error handling(abort, assert)
- memory shit(malloc, free, realloc)
owoowahhh
- file IO(fopen, fread, fwrite, fclose)
- networking(socket, bind, connect)
- EVENTUALLY port this to adan, and my lang