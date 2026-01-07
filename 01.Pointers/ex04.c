#include <stdio.h>
#include <stdlib.h>

int main() {
    // Initialize pointer to NULL
    int* ptr = NULL;
    printf("1. Initial ptr value: %p\n", (void*)ptr);

    // Check for NULL before using
    if (ptr == NULL) {
        printf("2. ptr is NULL, cannot dereference\n");
    }

    // Allocate memory
    ptr = malloc(sizeof(int)); // ptr = (int*)malloc(sizeof(int)); in you are compiling c++
    if (ptr == NULL) {
        printf("3. Memory allocation failed\n");
        return 1;
    }

    printf("4. After allocation, ptr value: %p\n", (void*)ptr);

    // Safe to use ptr after NULL check
    *ptr = 42;
    printf("5. Value at ptr: %d\n", *ptr);

    // Clean up
    free(ptr);
    ptr = NULL;  // Set to NULL after freeing

    printf("6. After free, ptr value: %p\n", (void*)ptr);

    // Demonstrate safety of NULL check after free
    if (ptr == NULL) {
        printf("7. ptr is NULL, safely avoided use after free\n");
    }

    return 0;
}

/*
Key takeaways (notes):

- Initialize pointers to NULL → safe starting state.
- Always check for NULL before dereferencing → avoid crashes.
- malloc allocates memory → returns void*.

In C: no cast needed.
In C++: cast required (int*)malloc(...).

- Use pointer only after successful allocation.

- Free memory with free(ptr) when done.

- Set pointer back to NULL after free → prevents “use after free” bugs.
*/

