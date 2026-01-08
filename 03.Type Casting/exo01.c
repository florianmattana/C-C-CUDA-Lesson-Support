#include<stdio.h>

int main ()
{
    float rdm = 76.888;
    int rdm_int = (int)rdm;
    printf("%d\n", rdm_int);
    
    char rdm_ascii = (char)rdm_int;
    printf("%c\n", rdm_ascii);
}

// This exercise demonstrates type casting in C, showing how to convert a float to an int and then an int to a char. 
//It highlights how casting truncates the decimal part when converting from float to int, and how integer values correspond to ASCII characters when cast to char. 
//The key lesson is understanding data type conversions and their effects on stored values in C.
//https://www.ascii-code.com/