#include <iostream>

using namespace std;

int xr = 0,xz, yr = 0, yz,stare_xr,stare_yr, kierunek = 1, i, suma;
unsigned long long n,t;
int main()
{
    cin >> n >> t;
    int *d = new int[n];
    for(int i = 0; i < n; i++) {
        cin >> d[i];
    }
    cin >> xz >> yz;
    i = 0;
     while(t > 0){
        switch(kierunek) {
            case 1:
                stare_yr = yr;
                yr += d[i%n];
                if((stare_yr < yz) && (yr > yz) && (xr == xz))
                    suma++;
                t = t - d[i%n] - 1;
                kierunek = 2;
                break;
            case 2:
                stare_xr = xr;
                xr += d[i%n];
                if((stare_xr < xz) && (xr > xz) && (yr == yz))
                    suma++;
                t = t - d[i%n] - 1;
                kierunek = 3;
                break;
            case 3:
                stare_yr = yr;
                yr -= d[i%n];
                if((stare_yr > yz) && (yr < yz) && (xr == xz))
                    suma++;
                t = t - d[i%n] - 1;
                kierunek = 4;
                break;
            case 4:
                stare_xr = xr;
                xr -= d[i%n];
                if((stare_xr > xz) && (xr < xz) && (yr == yz))
                    suma++;
                t = t - d[i%n] - 1;
                kierunek = 1;
                break;
        }
        if((xr==xz) && (yr==yz))
            suma++;
        i++;
    }
    cout << suma << endl;
}
