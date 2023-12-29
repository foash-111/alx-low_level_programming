#include <fcntl.h>
#include<unistd.h>
#include<stdio.h>
#include <sys/stat.h>
#include <string.h>

int main ()
{
int fd = open("example.txt", O_WRONLY | O_CREAT, S_IRUSR | S_IWUSR);
if (fd == -1) {
    // handle error
}
const char *data = "Hello, world!";
size_t bytesWritten = write(fd, data, strlen(data));
if (bytesWritten == -1) {
    // handle error
}
char buffer[256];
size_t bytesRead = read(fd, buffer, sizeof(buffer));
if (bytesRead == -1) {
    // handle error
}
if (close(fd) == -1) {
    // handle error
}
}
