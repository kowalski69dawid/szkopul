#include <iostream>

using namespace std;

int n,rp, suma, najm, roznica;

int main()
{
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> rp;
        suma += rp;
    }
    najm = suma;
    for(int bartek = 0; bartek <= suma; bartek++) {
        for(int damian = bartek + 1; damian <= suma; damian++) {
            for(int adam = damian + 1; adam <= suma; adam++) {
                if(adam+damian+bartek == suma) {
                    roznica = adam-bartek;
                    if((roznica > 0) && (roznica < najm)) {
                        najm = roznica;
                    }
                }
            } // adam
        } // damian
    } // bartek
    cout << najm;
}
