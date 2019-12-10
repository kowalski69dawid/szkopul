#include <stdio.h>

int x,y,z,ile_elementow, suma,trojkaty;

int main() {
    scanf("%d", &ile_elementow);
    int a[ile_elementow];
    for(int i = 0; i < ile_elementow; i++)
        scanf("%d", &a[i]);
    for(x = 0; x < ile_elementow; x++) {
        z = x+2;
        for(y = x + 1; y < ile_elementow; y++){
            while((a[x]+a[y] > a[z]) && (z < ile_elementow)) {
                z++;
            }
            trojkaty += z - y -1;
        }
    }
    printf("%d", trojkaty);
}
