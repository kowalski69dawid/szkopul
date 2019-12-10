#include <stdio.h>
#include <algorithm>

int gdzie,ilekl,ileklwp, maxwag,waga, wagapud, i;
int main()
{
    scanf("%d%d%d", &ilekl, &ileklwp, &maxwag);
    int tab[ilekl];
    for(int i = 0; i < ilekl; i++) {
        scanf("%d", &waga);
        if(waga < maxwag) {
            tab[gdzie] = waga;
            gdzie++;
        }
    }
    std::sort(tab, tab+gdzie);
    for(int i = gdzie; i >= 0; i--) {
        wagapud += tab[i];
        ileklwp--;
        if(wagapud > maxwag) {
            wagapud -= tab[i];
            ileklwp++;
        }
        if(ileklwp < 0)
            break;
    printf("I: %d\n Wagapud: %d\n Ile teraz klocków: %d\n ", i,wagapud,ileklwp); 
    }
    printf("%d", wagapud);
}
