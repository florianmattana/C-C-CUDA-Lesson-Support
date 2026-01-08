#include<stdio.h>
#include<stdlib.h>

int main ()
{
    int arr[] = {12, 24, 36, 48, 60};
    
    size_t size = sizeof(arr) / sizeof(arr[0]);
    printf("Size of array is : %zu\n", size);

    printf("size of size_t: %zu\n", sizeof(size_t));  // Output: 8 (bytes) -> 64 bits which is memory safe
    printf("int size in bytes: %zu\n", sizeof(int));  // Output: 4 (bytes) -> 32 bits

}

// This exercise illustrates how to determine the size of an array in C using sizeof, and how to calculate the number of elements safely.
//  It also introduces the size_t type, which is an unsigned integer type used for memory-safe sizes, and shows the sizes in bytes of size_t and int. 
//  The key lesson is understanding memory representation and safe ways to handle array sizes in C.