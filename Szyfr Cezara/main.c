#include <stdio.h>
#include <string.h>

int k;
#define size 10000
char tekst[size], *result, wybor[size];

void szyfruj(int b, char *a) {
    for(int i = 0; i < strlen(a); i++) {
        int litera = (int)a[i];
        if((litera >= 65) && (litera <= 90)) {
            litera += b;
            if(litera > 90)
                litera -= 26;
        }
        
  	    else if((litera >= 97) && (litera <= 122)) {
            litera += b;
            if(litera > 122)
                litera -= 26;
        }
        printf("%c", litera);
    }
}

void odszyfruj(int b, char *a) {
    for(int i = 0; i < strlen(a); i++) {
        int litera = (int)a[i];
        if((litera >= 65) && (litera <= 90)) {
            litera -= b;
            if(litera < 65)
                litera += 26;
        }
        
  	    else if((litera >= 97) && (litera <= 122)) {
            litera -= b;
            if(litera < 97)
                litera += 26;
        }
        printf("%c", litera);
    }
}

int main() {
    result = fgets(wybor, size, stdin);
    scanf("%d", &k);
    getchar();
    result = fgets(tekst, size, stdin);
    if(wybor[0] == 's')
        szyfruj(k,tekst);
    else
        odszyfruj(k, tekst);
}
