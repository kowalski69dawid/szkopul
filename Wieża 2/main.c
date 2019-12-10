#include <stdio.h>
    int liczba_schodkow,liczba_gosci,stop,j=0;
int main() {
    scanf("%d%d", &liczba_schodkow, &liczba_gosci);
    int wysokosc_schodka[liczba_schodkow];
    int wysokosc_gosci[liczba_gosci];
    for(int i = 0; i < liczba_schodkow; i++)
        scanf("%d", &wysokosc_schodka[i]);
    for(int i = 0; i < liczba_gosci; i++)
        scanf("%d", &wysokosc_gosci[i]);
    stop = liczba_schodkow;
    for(int i = 0; i < liczba_gosci; i++) {
        j = 0;
        while(wysokosc_gosci[i] > wysokosc_schodka[j]) {
            //printf("I: %d\n J: %d\n wysokosc_gosci[%d]: %d\n wysokosc_szchodka[%d]: %d\n", i,j,i, wysokosc_gosci[i], j, wysokosc_schodka[j]);
            if(stop <= j) {
                j -=1;
                break;
            }
            j++;
        }
        stop = j-1;
        printf("%d\n", j-1);
        }
}
