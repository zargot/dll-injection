#include <stdlib.h>
#include <sys/socket.h>

int
main()
{
    send(0, NULL, 123, 0);
}
