#include <iostream>
#include <cstdio>
#include <cmath>
#include <iomanip>
using namespace std;

double stopien, liczba;
int i;
int main()
{
    cin >> stopien >> liczba;
    string li = to_string(pow( liczba ,( 1 / stopien ) ));
    while(li[i] != '.') {
        cout << li[i];
        i++;
    }
    return 0;
}
