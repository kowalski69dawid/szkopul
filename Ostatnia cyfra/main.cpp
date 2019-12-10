#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int k,a,iidoa,x,g;
double didoa;
int main()
{
    cin >> k >> a;
    x = pow(10,k);
    int tab[x];
    cout << "string tablice" << k << a << " = {";
    for(int i = 0; i < x; i++) {
        didoa = pow(i,a);
        iidoa = didoa;
        if(i%x == iidoa%x)
            cout << i << ",";
    }
    cout << "};" << endl;
    return 0;
}
