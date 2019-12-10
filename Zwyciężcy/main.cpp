#include <iostream>

using namespace std;

int najwieksza = 0,n;
char alfabet[30] = {'A','B','C','D','E','F','G','H','I','J','K','L', 'M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};

int main() {
    cin >> n;
    int tab[n];
    for(int i = 0; i < n; i++) {
        cin >> tab[i];
    } // wczytywanie
    for(int i = 0; i < n; i++) {
        if(tab[i] > najwieksza)
            najwieksza = tab[i];
    } // znalezienie największej
    for(int i = 0; i < n; i++) {
        if(tab[i] == najwieksza)
            cout << alfabet[i];
    }//wyświetlenie
}//main
