#include <iostream>
#include <cstdlib>
#include <math.h>

using namespace std;
int n;
string liczbas,sumas;
double liczbad,suma;

int main()
{
    cin >> n;
    for(int i = 0; i < n; i++) {
    cin >> liczbas;
    for(int i = 0; i < liczbas.length(); i++)
        if(liczbas[i] == ',') {
            liczbas[i] = '.';
            break;
        }
    liczbad = stod(liczbas);
    suma = suma + liczbad;
    }
    sumas = to_string(suma);
    for(int i = 0; i < sumas.length(); i++)
        if(sumas[i] == '.') {
            sumas[i] = ',';
            break;   
        }
    cout << suma << endl << sumas;
    return 0;
}