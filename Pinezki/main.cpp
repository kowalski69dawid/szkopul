#include <stdio.h>

int n,l,ile,najwile;

int main()
{
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &l);
        if(l == 1)
            ile++;
        else 
            ile = 0;
    if(najwile < ile)
        najwile = ile;
           
    //printf("L: %d ile: %d Największa: %d\n", l,ile,najwile);
    }
    printf("%d", najwile);
}
