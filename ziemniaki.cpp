#include <iostream>

using namespace std;

int cenao, ile_gatunkow, ile_zamowien, nr_zamowienia;
double cenaa,waga;
int main() {
    cin >> ile_gatunkow >> ile_zamowien;
    double ceny[ile_gatunkow];
    for(int i = 0; i < ile_gatunkow; i++)
        cin >> ceny[i];
    for(int i = 0; i < ile_zamowien; i++) {
        cin >> nr_zamowienia >> waga;
        cenaa = cenaa + ceny[nr_zamowienia-1] * waga;
    } // liczenie ceny
    cenao = cenaa;
    cout << cenao;
} // main
