#include <iostream>

using namespace std;

int towary[90];

int main()
{
    int n, ile, jaki_towar;
    char towar;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> towar >> ile;
        jaki_towar = (int)towar;
        towary[jaki_towar] += ile;
    }
    for(int i = 0; i < 91; i++)
        if(towary[i] > 0)
            cout << (char)i <<" " << towary[i] << endl;
    return 0;
}
