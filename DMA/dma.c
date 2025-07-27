#include <stdio.h>
#include <stdlib.h>  // For malloc and free

int main() {
    int n, i;
    int *numbers; // Pointer to dynamically allocated array
    int largest, smallest;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Dynamic memory allocation
    numbers = (int *)malloc(n * sizeof(int));
    if (numbers == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Input n numbers
    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    // Initialize largest and smallest
    largest = smallest = numbers[0];

    // Find largest and smallest
    for (i = 1; i < n; i++) {
        if (numbers[i] > largest) {
            largest = numbers[i];
        }
        if (numbers[i] < smallest) {
            smallest = numbers[i];
        }
    }

    printf("Largest number: %d\n", largest);
    printf("Smallest number: %d\n", smallest);

    // Free allocated memory
    free(numbers);

    return 0;
}