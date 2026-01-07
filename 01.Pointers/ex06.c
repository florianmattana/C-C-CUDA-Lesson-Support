#include <stdio.h>

int main() {

    int array_1 [] = {1,2,3,4,5};
    int array_2 [] = {3,5,6,4,5};

    int* _ptrArray1 = array_1;
    int* _ptrArray2 = array_2;

    int* matrix[] = {_ptrArray1, _ptrArray2};

    for (int i = 0 ; i < 2 ; i++)
    {
        for (int j = 0 ; j < 5 ; j++ )
        {
            printf("%d", *matrix[i]++);
        }
        printf("\n");
    }

    return 0;
}

/*

This exercise demonstrates that an array of pointers is not a true 2D array, highlights operator precedence in expressions like *ptr++, and shows how incrementing pointers inside a loop can introduce hidden side effects. It emphasizes the difference between iterating with indices versus modifying pointers directly, and why pointer manipulation must be done carefully in C.

*/