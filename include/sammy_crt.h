#ifndef SAMMY_CRT_H
#define SAMMY_CRT_H

#define size_t unsigned int

/* Assembly Syscall Definitions */
void sys_exit(int code);
void sys_write(int fd, void* buf, size_t len);
void sys_sleep(unsigned seconds);

/* C Wrapper Definitions */
void exit(int code);
void write(int fd, void* buf, size_t len);
void sleep(unsigned seconds);

// PLANNED

size_t strlen(const char* str);
void* memcpy(void* dest, const void* src, size_t n);
void* memset(void* ptr, int value, size_t n);
void puts(const char* str);
int printf(const char* fmt, ...); // fuck va, btw

/* Memory Allocation */
void* malloc(size_t size);
void free(void* ptr);
void* realloc(void* ptr, size_t new_size);

/* Conversions */
int atoi(const char* str);
char* itoa(int value, char* buffer, int base);

/* Error Handling */
void abort(void);
void assert(int condition);

/* More Advanced Printing Shit */
int snprintf(char* buf, size_t n, const char* fmt, ...);

/* IO */
int getchar(void);
int putchar(int c);




// Woah, too far ahead </3

/* Threading */
// ...

/* File I/O */
int fopen(const char* path, const char* mode);
int fread(void* ptr, size_t size, size_t count, int fd);
int fwrite(const void* ptr, size_t size, size_t count, int fd);
int fclose(int fd);

/* Networking */
int socket(int domain, int type, int protocol);
int bind(int sockfd, const void* addr, size_t addrlen);
int connect(int sockfd, const void* addr, size_t addrlen);


#endif /* SAMMY_CRT_H */
