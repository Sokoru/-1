#include <stdio.h>
int main() {
    int a, b, c, max;
    printf("Задайте перше число: ");
    scanf("%d",&a);
    printf("Задайте друге число: ");
    scanf("%d",&b);
    printf("Задайте третє число: ");
    scanf("%d",&c);
    if (a > b && a > c) {
        max = a;
    } else if (b > a && b > c) {
        max = b;
    } else {
        max = c;
    }
    printf("Найбільше число: %d", max);
    return 0;
}

