#include <stdio.h>
#include <string.h>

#define size 255
int n;
char nawiasy[size], *result;

int main() {
	scanf("%d", &n);
	getchar();
	for(int i = 0; i < n; i++) {
		int j = 0,ln = 0,pn = 0;
		result = fgets(nawiasy, size, stdin);
		do {
			if(j == strlen(nawiasy)-1) {
				if(ln == pn) {
					printf("TRUE\n");
					break;
				}//if(ln == pn)
				else {
					printf("FALSE\n");
					break;
				} //else
					
			} // if(j == strlen(nawiasy))
			if(nawiasy[j] == '(')
				ln++;
			else if(nawiasy[j] == ')')
				pn++;
			else if((nawiasy[j] != '(') && (nawiasy[j] != ')')) {
				printf("FALSE\n");
				break;
			} //else
			j++;
		}while(ln >= pn);
	} //for
} //main
