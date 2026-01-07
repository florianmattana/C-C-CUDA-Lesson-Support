#include<stdio.h>

int main ()
{
    float value = 8.4;
    float* _ptrValue = &value;
    float** _ptrToptrValue = &_ptrValue;
    float*** _ptrToPtrtoptrValue = &_ptrToptrValue;

    printf("Value : %f\n", ***_ptrToPtrtoptrValue);
    return 0;
}

/*
This example is just to show the trick of deferencing pointer to pointer

=== Schema === 

_ptrToPtrtoptrValue
       |
       v
_ptrToptrValue
       |
       v
_ptrValue
       |
       v
    value = 8.4
    
You can chain pointers as many times as you like, but each level requires one more * to dereference. This is useful in some advanced cases like multi-level data structures, dynamic arrays of pointers, or passing pointers by reference.

*/
