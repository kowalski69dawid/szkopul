#include <iostream>

using namespace std;

unsigned long long obwod, n, najmx = 1000001,najmy = 1000001,x,y,najwx = 0,najwy = 0;

int main()
{
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> x >> y;
        if(x < najmx) najmx = x;
        if(y < najmy) najmy = y;
        if(x >  najwx) najwx = x;
        if(y >  najwy) najwy = y;
    }
    obwod = (najwx-najmx)*2 + (najwy - najmy)*2;
    cout << obwod;
}
