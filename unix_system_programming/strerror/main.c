#include <stdio.h>
#include <string.h>
#include <errno.h>


int main()
{
    int i;

    for (i=0;i<134;i++) {
        printf("errno[%3d]=%s\n", i, strerror(i));
    }

    return 0;
}
