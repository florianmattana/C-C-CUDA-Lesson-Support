#include<stdio.h>
#include <string.h>  // needed for strcpy

typedef struct
{
    char skin[15];
    int pv;
    float level;
} Character;

int main ()
{
    Character Rosalia;

    strcpy(Rosalia.skin, "gold");  // copy string into char array
    Rosalia.pv = 150;
    Rosalia.level = 1;

    printf("Character %s has %d and level %f\n", Rosalia.skin, Rosalia.pv, Rosalia.level);

    return 0;
}

// This exercise demonstrates how to define and use a struct in C to represent a complex data type (Character). 
// It shows how to store multiple properties (a string, an integer, and a float) in a single variable, how to copy a string into a char array using strcpy, and how to access and print the struct's fields. The key lesson is grouping related data together in C using structs.