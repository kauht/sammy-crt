#ifndef SAMMY_CRT_H
#define SAMMY_CRT_H

typedef long unsigned int size_t;

/* Assembly Syscall Definitions */
void sys_exit(int code);
void sys_write(int fd, void* buf, size_t len);
void sys_sleep(unsigned seconds);

/* C Wrapper Definitions */
void exit(int code);
void write(int fd, void* buf, size_t len);
void sleep(unsigned seconds);

#endif /* SAMMY_CRT_H */