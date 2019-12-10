#include <iostream>
#include <math.h>

using namespace std;

int n,suma = 2,k,temp;
string ssuma;
int main() {
	cin >> n >> k;
    int *tab = new int[n];
    tab[0] = 1;
    tab[1] = 1;
    for(int i = 2; i <= n; i++) {
        tab[i] = tab[i-1] + tab[i-2] + 1;
        suma += pow(tab[i],k);
    }
    ssuma = to_string(suma);
    for(int i = 0; i < 9 - ssuma.length(); i++)
        cout << "0";
    cout << ssuma;

}
