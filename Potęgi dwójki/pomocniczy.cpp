#include <iostream>

using namespace std;

int main()
{
    long double wynik = 1;
    for(int i = 0; i < 1000; i++) {
        wynik *= 10;
    }
    cout << wynik;
}
