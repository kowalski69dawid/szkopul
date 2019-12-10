#include <cstdio>

int x, dciagu,k=0,p=0,suma;

int main() {
    scanf("%d%d", &x, &dciagu);
    int a[dciagu];
    for(int i = 0; i < dciagu; i++)
        scanf("%d", &a[i]);
    suma = a[0];
    do {
        if(suma < x)
            suma += a[++p];
        else {
            suma -= a[k];
            k++;
        }
    }while(suma != x);
    for(int i = k; i <= p; i++)
        printf("%d\n", a[i]);
}
