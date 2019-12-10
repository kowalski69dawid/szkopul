#include <iostream>

using namespace std;

char a;
int b,ile;

int main()
{
    cin >> a >> b;
    if((a == 'a') && (b == 1)) ile = 3;
    if((a == 'a') && (b == 8)) ile = 3;
    if((a == 'h') && (b == 1)) ile = 3;
    if((a == 'h') && (b == 8)) ile = 3;
    if(ile == 3) cout << ile;
    else
        if((a != 'a') && (a != 'h') && (b != 1) && (b != 8)) { 
            ile = 8; 
            cout << ile;
        }
        else
            cout << "5";
    return 0;
}
