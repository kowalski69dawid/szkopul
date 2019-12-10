#include <stdio.h>

int a,b;
double l;

int main() {
    scanf("%d%d", &a,&b);
    if((a == 0) && (b == 0))
        printf("NIESKONCZONOSC");
    else if((a == 0) && (b != 0))
        printf("0");
    else if((a != 0) && (b == 0))
        printf("1");
    else {
        l = b/a;
        if(l == (int)l)
            printf("1");
        else
            printf("0");
    }
    
}
