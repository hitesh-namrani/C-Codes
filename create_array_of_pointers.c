#include <stdio.h>

// Function to create an array of pointers
void createArrayOfPointers(int* array[], int size) {
    for (int i = 0; i < size; i++) {
        static int values[10]; // Static array to hold values
        array[i] = &values[i]; // Assign the address of each element
        *array[i] = i + 1;     // Assign some value (e.g., i + 1)
    }
}

int main() {
    int size = 5; // Size of the array
    int* array[5]; // Array of pointers

    createArrayOfPointers(array, size);

    // Print the values
    for (int i = 0; i < size; i++) {
        printf("array[%d]: %d\n", i, array[i]);
    }

    return 0;
}