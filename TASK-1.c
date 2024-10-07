#include <stdio.h>

// Function that tries to modify the pointer itself
void modifyPointer(int *p) {
    int temp = 100;
    p = &temp;  // This only modifies the copy of the pointer, not the original one
    *p = 200;   // Modifies the value pointed to by the local pointer (not the original address)
    printf("Inside function modifyPointer: *p = %d (Address of p: %p)\n", *p, p);
}

int main() {
    int a = 10;
    int *ptr = &a;  // Pointer to the variable a

    printf("Before calling modifyPointer: a = %d, *ptr = %d (Address of ptr: %p)\n", a, *ptr, ptr);

    // Call the function, passing the pointer
    modifyPointer(ptr);

    // Check values after the function call
    printf("After calling modifyPointer: a = %d, *ptr = %d (Address of ptr: %p)\n", a, *ptr, ptr);

    return 0;
}
