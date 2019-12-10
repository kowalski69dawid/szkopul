#include <iostream>

using namespace std;

int main()
{
    int suma = 0;
    int ktora_liczba = 0;
    int n; //Ciąg do n;
    int k; //K ostatnich liczb dodajemy;
    int i; //dodajemy od tego;
    int g; //dodajemy do tego;
    cin >> n >> k >> i >> g;
    for(int j = 1; j <= n; j++)
        cout << j << " ";
    cout << endl;
    for(int j = n - k + 1; j <= n; j++)
        cout << j << " ";
    cout << endl;
    for(int j = n - k + i; j <= n; j++)
        cout << j << " ";
    cout << endl;
    for(int j = 1; j <= g - k; j++)
        cout << j << " ";
}
