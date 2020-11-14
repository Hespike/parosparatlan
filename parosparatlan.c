#include <stdio.h>

int main() {
    int n;
    printf("Kérek egy egész számot: ");
    scanf("%d", &n);
    printf("A megadott szám %s.\n", (n % 2 == 0) ? "páros" : "páratlan");
    return 0;
}