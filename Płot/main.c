#include <stdio.h>

int d,n,w,o,najm = 100000000;

int main() {
    scanf("%d", &d);
    for(int i = 0; i < d; i++) {
        scanf("%d",&n);
        for(int j = 0; j < n; j++) {
            scanf("%d", &w);
            o += w;
        }
        if(o < najm)
            najm = o;
        o = 0;
    }
    printf("%d", najm);
}
