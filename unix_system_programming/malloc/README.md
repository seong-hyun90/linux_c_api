
NAME
    calloc, malloc, free, realloc - Allocate and free dynamic memory

SYNOPSIS
    #include <stdlib.h>

    void *calloc(size_t nmemb, size_t size);
    void *malloc(size_t size);
    void free(void *ptr);
    void *realloc(void *ptr, size_t size);

DESCRIPTION
    calloc()  allocates  memory for an array of nmemb elements of size bytes each and returns a pointer to the allo-
    cated memory.  The memory is set to zero.  If nmemb or size is 0, then calloc() returns either NULL, or a unique
    pointer value that can later be successfully passed to free().

    malloc()  allocates  size  bytes  and returns a pointer to the allocated memory.  The memory is not cleared.  If
    size is 0, then malloc() returns either NULL, or a unique pointer value that can later be successfully passed to
    free().

    free()  frees  the memory space pointed to by ptr, which must have been returned by a previous call to malloc(),
    calloc() or realloc().  Otherwise, or if free(ptr) has already been called before,  undefined  behavior  occurs.
    If ptr is NULL, no operation is performed.

    realloc()  changes the size of the memory block pointed to by ptr to size bytes.  The contents will be unchanged
    to the minimum of the old and new sizes; newly allocated memory will be uninitialized.  If ptr is NULL, then the
    call  is equivalent to malloc(size), for all values of size; if size is equal to zero, and ptr is not NULL, then
    the call is equivalent to free(ptr).  Unless ptr is NULL, it must have been returned by an earlier call to  mal-
    loc(), calloc() or realloc().  If the area pointed to was moved, a free(ptr) is done.

RETURN VALUE
    For  calloc()  and malloc(), return a pointer to the allocated memory, which is suitably aligned for any kind of
    variable.  On error, these functions return NULL.  NULL may also be returned by a successful  call  to  malloc()
    with a size of zero, or by a successful call to calloc() with nmemb or size equal to zero.

    free() returns no value.

    realloc()  returns  a  pointer to the newly allocated memory, which is suitably aligned for any kind of variable
    and may be different from ptr, or NULL if the request fails.  If size was equal to 0, either NULL or  a  pointer
    suitable to be passed to free() is returned.  If realloc() fails the original block is left untouched; it is not
    freed or moved.

    CONFORMING TO
    C89, C99.

    NOTES
    Normally, malloc() allocates memory from the heap, and adjusts the size of the heap as required, using  sbrk(2).
    When  allocating  blocks of memory larger than MMAP_THRESHOLD bytes, the glibc malloc() implementation allocates
    the memory as a private anonymous mapping using mmap(2).  MMAP_THRESHOLD is 128 kB by default, but is adjustable
    using  mallopt(3).   Allocations  performed  using mmap(2) are unaffected by the RLIMIT_DATA resource limit (see
    getrlimit(2)).
