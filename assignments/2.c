#include <stdio.h>

int main() {
    int a1[5];
    
    printf("Enter 5 elements:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &a1[i]);
    }

    
    int max = a1[0];

    for (int i = 1; i < 5; i++) {
        if (a1[i] > max) {
            max = a1[i];
        }
    }

    printf("The maximum number in the array is: %d\n", max);

    return 0;
}
