#include <iostream>
#include <math.h>

using namespace std;

int tab[10][4];


long long a,b;
int main()
{
    tab[2][3] = 6;
    tab[2][0] = 2; 
    tab[2][1] = 4;
    tab[2][2] = 8; 
    tab[3][0] = 3;
    tab[3][1] = 9;
    tab[3][2] = 7;
    tab[3][3] = 1;
    tab[4][0] = 4;
    tab[4][1] = 6;
    tab[5][0] = 5;
    tab[6][0] = 6;
    tab[7][0] = 1;
    tab[7][1] = 9;
    tab[7][2] = 3;
    tab[7][3] = 1;
    tab[8][0] = 8;
    tab[8][1] = 2;
    tab[8][2] = 6; 
    tab[8][3] = 4;
    tab[9][0] = 1;
    tab[9][1] = 9;
    cin >> a >> b;
    a = a%10;
    switch(a) {
        case 0:
            cout << "0";
            break;
        case 1:
            cout << "1";
            break;
        case 2:
            if(b < 5)
                cout << tab[a][b-1];
            else
                cout << tab[a][b%4-1];
            break;
        case 3:
            if(b < 5)
                cout << tab[a][b-1];
            else
                cout << tab[a][b%4-1];
            break;
        case 4:
            if(b%2 == 0)
                cout << tab[a][0];
            else
                cout << tab[a][1];
            break;
        case 5:
            cout << tab[5][0];
            break;
        case 6:
            cout << tab[6][0];
            break;
        case 7:
            if(b < 5)
                cout << tab[a][b-1];
            else
                cout << tab[a][b%4-1];
            break;
        case 8:
            if(b < 5)
                cout << tab[a][b-1];
            else
                cout << tab[a][b%4-1];
            break;
        case 9:
            if(b%2 == 0)
                cout << tab[a][0];
            else
                cout << tab[a][1];
            break;
    }
}

