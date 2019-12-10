#include <stdio.h>

int ile,k,iles,suma;

int main()
{
    scanf("%d%d", &k, &iles);
    int s[iles];
    for(int i = 0; i < iles; i++) {
        scanf("%d", &s[i]);
    }
    int sumy[iles];
    for(int i = 0; i < k; i++) {
        sumy[i] = k;
    }
    for(int i = 0; i < iles; i++)
        if(sumy[i] > 0) {
            ile++;
            sumy[i] -= s[i];
 
        }
}
    
}
