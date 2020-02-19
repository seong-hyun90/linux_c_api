
## NAME
> malloc - 동적 메모리를 할당한다.

## SYNOPSIS
> #include <stdlib.h>
>    
> void *malloc(size_t size);

## DESCRIPTION
    malloc() 은 매개변수로 지정한 사이즈 만큼 할당한 메모리 주소를 리턴한다. 
    할당된 메모리는 초기화 되지 않아 쓰레기 값이 포함되어 있을 수 있다.
    할당한 메모리는 free() 를 통해 해제해 줘야 한다.
    
## RETURN VALUE
    성공 : 할당한 메모리 주소
    실패 : NULL

## ERRORS
    ENOMEM : 할당할 메모리가 남아있지 않다.
