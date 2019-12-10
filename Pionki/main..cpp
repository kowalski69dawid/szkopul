//#include <cstdio>
#include <stdio.h>
#include <limits.h>
int n,suma,maxl,najwz6,gdzie,najw = INT_MIN;
int main() {
    scanf("%d", &n);
    int liczby[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &liczby[i]);
    }
    for(int i = 0; i < n; i++) {
        if(liczby[i] < 0) {
            if(gdzie == 6) {
                for(int j = i; j > i-7; j--) {
                    if(liczby[j] > najw)
                        najw = liczby[j];
                }
            
            }
            if(najw > INT_MIN)
                i = najw;
            gdzie++;
        }
        else
            suma += liczby[i];
	}// for(int i = 0; i < n; i++)
    printf("%d", suma);
} // main
