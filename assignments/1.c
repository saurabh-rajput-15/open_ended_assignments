#include <stdio.h>

int main() {
    int a1[10];
    
    printf("Enter 10 elements:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &a1[i]);
    }

    printf("Elements in reverse order:\n");
    for (int i = 9; i >= 0; i--) {
        printf("%d\n", a1[i]);
    }

    return 0;
}
