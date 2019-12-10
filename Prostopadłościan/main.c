#include <stdio.h>

unsigned long int a,b,c;

int main() {
    scanf("%lu%lu%lu", &a,&b,&c);
    printf("%lu\n", a*b*c);
    printf("%lu", 2 * a * b + 2*a*c + 2 * b * c);
}
