#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int arr[10] = {12, 45, 7, 23, 56, 7, 89, 23, 7, 90};
    
    if (argc != 2) {
        printf("Please enter a key number as a command line argument.\n");
        return 1;
    }

    int key = atoi(argv[1]);

    int count = 0;
    int min = arr[0];
    int max = arr[0];

    for (int i = 0; i < 10; i++) {
        if (arr[i] == key) {
            count = count + 1;
        }

        if (arr[i] < min) {
            min = arr[i];
        }

        if (arr[i] > max) {
            max = arr[i];
        }
    }

    printf("Key: %d\n", key);
    printf("Occurrences of key: %d\n", count);
    printf("Minimum element: %d\n", min);
    printf("Maximum element: %d\n", max);

    return 0;
}
