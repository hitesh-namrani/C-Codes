#include <stdio.h>
#include <string.h> // Include the string.h library

int main() {
    enum math {
        pi = 314, // pi is a constant value
        e = 274, // e is a constant value
    }
    printf("pi: %d\n", pi); // Print the value of pi
    printf("e: %d\n", e); // Print the value of e
}