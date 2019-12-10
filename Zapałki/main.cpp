#include <stdio.h>
int n,a,suma;
int main() {
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &a);
        suma += a;
    }
    if((suma == n) || (suma == 0))
        printf("0");
    else
        if(suma < n/2)
            printf("%d", suma);
        else
            printf("%d", n-suma);
        

}
