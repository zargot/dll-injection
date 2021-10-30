#include <stdio.h>
#include <sys/types.h>

ssize_t
send(int sockfd, const void *buf, size_t len, int flags)
{
    puts("OVERRIDE");
    return 0;
}
