#include <iostream>

using namespace std;
unsigned long long badana, a,b,i;
int main()
{
    cin >> a >> b;
    if(a < b) badana = a; else badana = b;
    for(i = badana; i > 0; i--) {
        if((a%i == 0) && (b%i == 0)) 
            break;
    }
    cout << i;
}
