#include <stdio.h>
#include <string.h>
#define size 200

int lini,znak;
char tekst[size], *result;
int liter[123];
int main() {
    scanf("%d", &lini);
    getchar();
    for(int i = 0; i < lini; i++) {
        result = fgets(tekst, size, stdin);
        for(int j = 0; j < strlen(tekst); j++) {
            znak = (int)tekst[j];
            liter[znak]++;   
        }
    }
    for(int i = 97; i < 123; i++)
        if(liter[i] > 0)
            printf("%c %d\n", (char)i, liter[i]);
    for(int i = 65; i < 91; i++)
        if(liter[i] > 0)
            printf("%c %d\n", (char)i, liter[i]);
}
