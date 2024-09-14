#include <stdio.h>

int main() {
    int t;
    printf("Enter number of test cases: ");
    scanf("%d", &t);

    while (t > 0) {
        int n;
        printf("\nEnter the number of leaves: ");
        scanf("%d", &n);

        int leaves[n];
        printf("Enter the magic values of the leaves: \n");
        for (int i = 0; i < n; i++) {
            scanf("%d", &leaves[i]);
        }

        int currentMagic = 0;
        int maxMagic = 0;

        for (int i = 0; i < n; i++) {
            if (leaves[i] == 0) {
                if (currentMagic > maxMagic) {
                    maxMagic = currentMagic;
                }
                currentMagic = 0;
            } else {
                currentMagic = currentMagic + leaves[i];
            }
        }

        if (currentMagic > maxMagic) {
            maxMagic = currentMagic;
        }

        printf("Maximum possible magic: %d\n", maxMagic);

        t = t - 1;
    }

    return 0;
}
