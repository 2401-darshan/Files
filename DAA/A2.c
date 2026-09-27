#include <stdio.h>

int main() {
    int a;
    float b;
    double c;
    char d;

    int *p1;
    float *p2;
    double *p3;
    char *p4;

    printf("Enter integer: ");
    scanf("%d", &a);

    printf("Enter float: ");
    scanf("%f", &b);

    printf("Enter double: ");
    scanf("%lf", &c);

    printf("Enter character: ");
    scanf(" %c", &d);

    p1 = &a;
    p2 = &b;
    p3 = &c;
    p4 = &d;

    printf("\nInteger = %d\n", *p1);
    printf("Float = %.2f\n", *p2);
    printf("Double = %.2lf\n", *p3);
    printf("Character = %c\n", *p4);

    return 0;
}