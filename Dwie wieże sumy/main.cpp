#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

string sumaa,sumab;
int ilea,ileb,g,a,suma, gdzie;
int main()
{
    scanf("%d%d", &ilea,&ileb);
    for(int i = 0; i < ilea; i++) {
        scanf("%d", &a);
        suma += a;
        sumaa += to_string(suma);
    }
    printf("Suma pierwszej wieży:%d \n", suma);
    suma = 0;
    for(int i = 0; i < ileb; i++) {
        scanf("%d", &a);
        suma += a;
        sumab += to_string(suma);
    }
    printf("Suma drugiej wieży: %d \n", suma);
    
    if(ilea > ileb)
        g = ilea - 1;
    else
        g = ileb - 1;
    cout << sumaa << "\n" << sumab;
    gdzie = sumaa.find(


}
