#include <stdio.h>

int n,m,ktory,najw;

int main() {
    scanf("%d%d", &n,&m);
    int liczniki[n];
    for(int i = 0; i < n; i++)
        liczniki[i] = 0;
    najw = liczniki[0];
    for(int i = 0; i < m; i++) {
        scanf("%d", &ktory);
        if(ktory <= n) {
            liczniki[ktory-1]++;
            if(liczniki[ktory-1] > najw) {
                najw = liczniki[ktory-1];
                //printf("%d Największa: %d\n", i, najw);
            }
        }
        else {
            for(int j = 0; j < n; j++) {
                liczniki[j] = najw;
                //printf("%d ", liczniki[j]);
            }
            //printf("\n");
        }
    }
    for(int i = 0; i < n; i++)
        printf("%d ", liczniki[i]);
}
