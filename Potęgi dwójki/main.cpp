#include <iostream>
#include <string>

using namespace std;

int main()
{
    int tab[4] = {2,4,8,6};
    int n,k;
    cin >> n;
    k = n%4;
    if(k != 0)
        cout << tab[k-1];
    else
        cout << tab[3];
}
