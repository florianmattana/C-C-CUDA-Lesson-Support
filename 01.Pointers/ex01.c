#include<stdio.h> // important to bring standard input/output header file to use printf

int main ()
{
    float x = 8.0;
    float* _ptrX = &x; // int _ptrX is a pointer to an float

    printf("Adress of x : %p\n", _ptrX);
    printf("Value of x %f\n", *_ptrX); //deferencing
    return 0;
}


/*
=== NB ===
If you hover the mouse on 8.0 VSCode will says it is a double.
A double will use 8 bytes or 64 bits of memory while a float uses only 4 bytes or 32 bits.
This means that a float is less precise since it can store fewer digits after the decimal place.

8.0 is a double by default in C/C++.
In float x = 8.0;, the literal is a double and is implicitly converted to float.
Use 8.0f to make the literal a float in case of a repeated loop.Otherwise keep double for precision
*/ 
