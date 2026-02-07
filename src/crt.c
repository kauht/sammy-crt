#include "../include/sammy_crt.h"

void exit(int code) {
    sys_exit(code);
}

void write(int fd, void* buf, size_t len) {
    sys_write(fd, buf, len);
}

void sleep(unsigned seconds) {
    sys_sleep(seconds);
}