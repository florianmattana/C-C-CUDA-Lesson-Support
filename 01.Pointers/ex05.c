#include <stdio.h>

int main() {

    int array[] = {1,2,3,4,5};

    int* _ptrArray = array;
    
    for (int i = 0; i < 5 ; i++)
    {
        printf("%d\t",*_ptrArray);
        printf("%p\t", _ptrArray);

        _ptrArray++;
    }

    return 0;
}

/*
- int* _ptrArray = array; → _ptrArray points to array[0].
- Dereferencing the pointer (*_ptrArray) gives the current element’s value.
- Printing the pointer (_ptrArray) shows the memory address of the element.
- Pointer arithmetic (_ptrArray++) moves the pointer to the next element.
- Incrementing an int* advances by sizeof(int) bytes, not by 1 byte.
*/

