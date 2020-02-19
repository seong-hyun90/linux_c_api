#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>


int main()
{
    void *ptr = NULL;

    ptr = (void *)malloc(10);
    if (ptr == NULL) {
        printf("malloc fail. errno=%d(%s)\n", errno, strerror(errno));
        return -1;
    }
    printf("malloc succ\n");

    return 0;
}
