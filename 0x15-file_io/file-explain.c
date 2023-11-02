#include <stdio.h>
#include <unistd.h>

void my_function() {
    printf("This is a function call.\n");
}

int main() {
    my_function();  // Function call
    write(1, "This is a system call.\n", 27);  // System call
    return 0;
}
/**
 * In this example, my_function() is a function call,
 *  while write() is a system call. 
 * The function call simply executes a block of code within the same program,
 *  while the system call interacts with the operating system
 *  to perform a specific task, in this case, writing to the standard output.
*/





#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
int main() {
    /**
     * int open(const char *pathname, int MODES);
    *  int open(const char *pathname, int MODES, mode_t PERMISSION);
    */ // USER  GROUP OTHER                             u   g   o
        //                                              rwx rwx rwx
                                            //          rwX r-- ---
    //                                                  110 100 000
    //                                                  S_IRWU
                                                    //     S_IRWXU

   open("path/to/file", O_WRONLY | O_TRUNC | O_CREAT, 0640 );
    int fd = open("test.txt", O_RDONLY | O_CREAT, 0620);
/*
O_RDONLY 0
O_WRONLY 1
O_RDWR  2
100 O_TRUNC 2^9
O_CREAT 2^6
O_APPEND 2^10

*/
    // fd now contains the file descriptor for the opened file
    return 0;
}


#include <sys/stat.h>
#include <fcntl.h>

int main ()
{
int fd = open("example.txt", O_WRONLY | O_CREAT, S_IRUSR | S_IWUSR);
if (fd == -1)
{
    
    // handle error
}
    return (0);

}



//ssize_t read(int fd, void *buf, size_t count);

#include <fcntl.h>
#include <unistd.h>

int main() {
    char buffer[100];
    int fd = open("test.txt", O_RDONLY);
    read(fd, buffer, 100);//read from the file
    // The buffer now contains the first 100 bytes of the file
    close(fd);
    return 0;
}

#include <unistd.h>

int main() {
    char buf[100];
    read(0, buf, 100);  // 0 is the file descriptor for standard input
    // read from the user and store to the buffer
    // use buf for subsequent operations
    return 0;
}



//ssize_t write(int fd, const void *buf, size_t count);
#include <unistd.h>
#include <string.h>

void main()
{
    char buff[20];
    char hello[20] = "Hello, ";
    read(0, buff, 20);
    strcat(hello, buff);
    write(1, hello, strlen(hello));
}



#include <unistd.h>

int main() {
    // 2 is the file descriptor for standard error
    write(2, "An error occurred\n", 18);
    return 0;
}

#include <fcntl.h>
#include <unistd.h>

int main() {
    const char *buffer = "Hello, World!";
    int fd = open("test.txt", O_WRONLY);
    ssize_t bytesWritten = write(fd, buffer, 13);
    close(fd);
    return 0;
}



#include <fcntl.h>
#include <unistd.h>

int main() {
    char buffer[100];
    int fd = open("test.txt", O_RDONLY);
    ssize_t bytesRead = read(fd, buffer, 100);
    close(fd);
    return 0;
}

#include <fcntl.h>
#include <unistd.h>

int main() {
    char buffer[101]; 
     // Buffer size increased to 101 to accommodate 100characters 
     //and a null character at the end
    int fd = open("test.txt", O_RDONLY);

    ssize_t bytesRead;

    while ((bytesRead = read(fd, buffer, 100)) > 0) 
    {
        buffer[bytesRead] = '\0'; 
         // Null-terminating the string

        write(STDOUT_FILENO, buffer, bytesRead); 
         // Writing the buffer contents to stdout
    }
    close(fd);
    return 0;
}


#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

int	main(void)
{
	int	fd;

//	Open a file descriptor for the "test.txt" file, in
//	truncated write only mode, and create the file if it doesn't
//	already exist. Read and write permissions for the owner, read
//	permissions for the group.
	fd = open("test.txt", O_WRONLY | O_TRUNC | O_CREAT, 0640);
//	Stop everything if the file could not be opened
	if (fd == -1)
		return (1);
//	Print the fd of the new file
	printf("fd = %d\n", fd);
//	Write into the file descriptor
	write(fd, "Hello World!\n", 13);
//	Close the file
	close(fd);
	return (0);
}


#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

int	main(void)
{
	char	buf[100];	// stores the characters read
	int	fd;		// file descriptor to read
	int	nb_read;	// stores read's return value
	int	count;		// counts the number of reads

//	Open the cat.txt file in read only mode
	fd = open("cat.txt", O_RDONLY);
	if (fd == -1)
		return (1);
//	Initialize the count variables
	nb_read = -1;
	count = 0;
//	Loop as long as read does not return 0 (which would mean that
//	there is nothing more to read in the file)
	while (nb_read != 0)
	{
		// Read 100 characters with read from the
		// opened file descriptor
		nb_read = read(fd, buf, 100);
		// Stop everything if read encounters an error
		if (nb_read == -1)
		{
			printf("Read error!\n");
			return (1);
		}
		// Read does not add the terminating \0
		// We can use the number of read characters as the index
		// of the last character in the string
		buf[nb_read] = '\0';
		// Print the buffer contents after read
		printf("\e[36m%d : [\e[0m%s\e[36m]\e[0m\n", count, buf);
		count++;
	}
//	Close the opened file descriptor
	close(fd);
	return (0);
}
