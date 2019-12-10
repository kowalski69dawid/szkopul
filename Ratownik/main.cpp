#include <iostream>
#include <math.h>
using namespace std;

int ldzieci,zasieg,xr,xd,yr,yd,poza_zasiegiem = 0;

int main() {
    cin >> ldzieci >> zasieg >> xr >> yr;
    for(int i = 0; i < ldzieci; i++) {
        cin >> xd >> yd;
        int odl = pow((xr-xd),2) + pow((yr-yd),2);
        odl = sqrt(odl);
        if(=abs(odl) >= zasieg)
            poza_zasiegiem++;
    }
    cout << poza_zasiegiem;
}
