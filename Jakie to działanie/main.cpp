#include <iostream>

using namespace std;

int a,b,c;

int main()
{
    cin >> a >> b >> c;
    if(a + b == c) cout << a << " + " << b << " == " << c << endl;
    if(a - b == c) cout << a << " - " << b << " == " << c << endl;
    if(a * b == c) cout << a << " * " << b << " == " << c << endl;
    if(b * a != 0) if (a / b == c) cout << a << " / " << b << " == " << c << endl;
    if(b * a != 0) if(a % b == c) cout << a << " % " << b << " == " << c << endl;

    return 0;
}
