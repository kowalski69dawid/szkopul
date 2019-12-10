//ćwiczenie c
#include <stdio.h>

int a,b,c,g;

int main()
{
    scanf("%d%d%d",&a,&b,&c);
    if(a + b == c) {
        printf("%d + %d == %d\n", a, b , c);
        g++;
    }
    if(a - b == c) {
        printf("%d - %d == %d\n", a, b , c);
        g++;
    }
    if(a * b == c) {
        printf("%d * %d == %d\n", a, b , c);
        g++;
    }
    if(b*a != 0) if(a / b == c) {
        printf("%d / %d == %d\n", a , b, c);
        g++;
    }
    if(b*a != 0) if(a % b == c) {
        printf("%d %% %d == %d\n", a, b , c);
        g++;
    }
    if(g == 0)
        printf("0");
}
