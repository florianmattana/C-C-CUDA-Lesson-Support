#include<stdio.h>

int main ()
{
    int rdm_Integer = 234;
    float rdm_Float = 3.14;

    void* _genericPtr;

    _genericPtr = &rdm_Integer;
    printf("Integer : %d\n", *(int*)_genericPtr);
    
    _genericPtr = &rdm_Float;
    printf("Float : %f\n", *(float*)_genericPtr);

    return 0;
}

/*
This features is important in order to manipulate malloc or CUDA Malloc because malloc or cuda malloc return an void pointer and we use it a lot for kernel to manipulate arrays for example
The rule is that void* (Generic Pointer): A pointer that can hold any type. Must cast before dereferencing. Used in malloc, cudaMalloc, and generic data structures for flexible memory handling.

*/

