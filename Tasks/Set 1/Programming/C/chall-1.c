#include <stdio.h>

int main() {
    int t, x, y, n, result;
    
    printf("Enter the number of test cases: ");
    scanf("%d", &t);
    
    while (t > 0) {
        printf("Enter the first two numbers (x and y): ");
        scanf("%d %d", &x, &y);
        
        printf("Enter the index of the number to find (n): ");
        scanf("%d", &n);
        
        if (n % 3 == 0) {
            result = x;
        } else if (n % 3 == 1) {
            result = y;
        } else {
            result = x ^ y;
        }
        
        printf("The %d-th number in the sequence is: %d\n", n, result);
        
        t--;
    }
    
    return 0;
}
