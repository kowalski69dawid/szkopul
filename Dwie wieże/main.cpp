#include <iostream>
#include <stdio.h>
using namespace std;
int ile,ilea,ileb,sumaa,sumab,ia,ib;
int main()
{
    scanf("%d%d",&ilea, &ileb);
    int taba[ilea];
    int tabb[ileb];
    for(int i = 0; i < ilea; i++) {
        scanf("%d", &taba[i]);
        sumaa += taba[i];
    }
    for(int i = 0; i < ileb; i++) {
        scanf("%d", &tabb[i]);
        sumab += tabb[i];
    }
    ia = ilea - 1;
    ib = ileb - 1;

    do {
        
        if((sumaa > sumab) && (sumaa != sumab)) {
            sumaa -= taba[ia];
            ile++;
            ia--;
        }
        else {
            sumab -=tabb[ib];
            ile++;
            ib--;
        }
    }while(sumaa != sumab);
    printf("%d",ile);
}
