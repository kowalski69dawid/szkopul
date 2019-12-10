#include <iostream>
using namespace std;
int main()
{
    unsigned long long suma = 0,wartosc,wartoscb = 0;
    do
    {
        cin >> wartosc;
        if(wartosc > wartoscb) {
            suma++;
            wartoscb = wartosc;
        }
    }while(wartosc != -1);
    cout << suma-1;
    return 0;
}
