
## NAME
    free - 할당된 메모리를 해제한다.

## SYNOPSIS
> #include <stdlib.h>
>
> void free(void *ptr);

## DESCRIPTION
    할당된 메모리 주소를 매개변수 ptr 로 넣어주면 해제한다.
    만약 매개변수 ptr 이 NULL이라면 아무것도 하지 않는다.

## RETURN VALUE
    free() returns no value.
