//ćwiczenie c
#include <stdio.h>

unsigned int a,b,suma,n,i;

int main()
{
    scanf("%u",&n);
    for(i = 0; i < n; i++) {
        scanf("%u%u",&a,&b);
        suma += a*b;
    }
    printf("%u", suma);
}
