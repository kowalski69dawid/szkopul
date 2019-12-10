#include <iostream>

using namespace std;

int main()
{
    int x,y;
    cin >> x >> y;
    if((x > 0) && (y > 0)) cout << "I";
    if((x < 0) && (y > 0)) cout << "II";
    if((x < 0) && (y < 0)) cout << "III";
    if((x > 0) && (y < 0)) cout << "IV";
    if((x == 0) && (y == 0)) cout << "0";
    if((x == 0) && (y != 0)) cout << "OY";
    if((y == 0)&& (x != 0)) cout << "OX";

}
