
## NAME
    strerror, strerror_r - return string describing error number

## SYNOPSIS
> #include <string.h>
>
> char *strerror(int errnum);

## DESCRIPTION
    The  strerror()  function  returns  a  pointer to a string that describes the error code passed in the argument
    errnum, possibly using the LC_MESSAGES part of the current locale to select  the  appropriate  language.   This
    string  must  not be modified by the application, but may be modified by a subsequent call to perror(3) or str-
    error().  No library function will modify this string.

## RETURN VALUE
    return the appropriate error description string
    or an "Unknown error nnn" message if the error number is unknown.

## ERRORS
    EINVAL The value of errnum is not a valid error number.
    ERANGE Insufficient storage was supplied to contain the error description string.
