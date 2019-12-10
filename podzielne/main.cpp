#include <iostream>

using namespace std;
int a,b,c,podzielne = 0;
int main()
{
    cin >> a >> b >> c;
    for(int i = a; i <= b; i++)
        if(i%c == 0) podzielne++;
    
    cout << podzielne;
    return 0;
}
