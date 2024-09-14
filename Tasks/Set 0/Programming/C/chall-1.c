#include <stdio.h>

int main() {
    int a = 10;
    int b = 2;
    int product = 0;

    for (int i = 0; i < b; i++) {
        product = product + a;
    }

    printf("The product is: %d\n", product);

    return 0;
}
