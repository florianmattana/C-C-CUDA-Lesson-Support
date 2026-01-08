#include <stdio.h>

const float PI = 3.141592;

#define RADIUS 5
#define HEIGHT 10

inline float circle_area (float r)
{
    return PI * r * r ;
}

int main ()
{ 
    printf("Cercle rayon %d : aire = %f\n", RADIUS, circle_area(RADIUS));

    return 0;
}

// Takeaway of the exercise

// This exercise demonstrates the use of constants and inline functions in C. It shows how to calculate the area of a circle using a reusable function, emphasizing clean and efficient code.

// Key insights:

// Normal function calls
// When a function is called, the program saves its state, jumps to the function code, executes it, and then returns. This introduces extra instructions, even for simple calculations.

// Inline functions
// Declaring a function as inline tells the compiler to replace the function call with the actual code directly at the call site. This avoids the jump and reduces overhead.

// Purpose
// Inline functions are useful for small, frequently called functions. They produce the same result as normal functions but can be faster because they remove the call overhead.

// Important note
// The compiler may ignore the inline suggestion if the function is too large.

// Mental model:
// Normal function = go to the function and come back
// Inline function = put the function code directly where it is called