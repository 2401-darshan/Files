#include <stdio.h>

int main() {
    int n, i, temp;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int a[n], b[n];

    printf("Enter first array:\n");

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter second array:\n");

    for (i = 0; i < n; i++) {
        scanf("%d", &b[i]);
    }

    for (i = 0; i < n; i++) {
        temp = *(a + i);
        *(a + i) = *(b + i);
        *(b + i) = temp;
    }

    printf("First array after swapping:\n");

    for (i = 0; i < n; i++) {
        printf("%d ", *(a + i));
    }

    printf("\nSecond array after swapping:\n");

    for (i = 0; i < n; i++) {
        printf("%d ", *(b + i));
    }

    return 0;
}