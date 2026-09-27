#include <stdio.h>

int main() {
    int a;
    int *p;

    printf("Enter value: ");
    scanf("%d", &a);

    p = &a;

    printf("Value = %d\n", a);
    printf("Address = %p\n", p);

    return 0;
}