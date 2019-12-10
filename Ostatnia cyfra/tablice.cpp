#include <iostream>

using namespace std;

string tablica12 = "0 1 5 6";
string tablica13 = "0 1 4 5 6 9";
string tablica22 = "0 1 25 76";
string tablica23 = "0 1 24 25 49 51 75 76 99";
string tablica32 = "0 1 376 625";
string tablica33 = "0 1 125 249 251 375 376 499 501 624 625 749 751 875 999";
string tablica42 = "0 1 625 9376";
string tablica43 = "0 1 624 625 1249";
string tablica52 = "0 1 9376";
string tablica53 = "0 1";
string tablica62 = "0 1";
string tablica63 = "0 1";
int k,a;
int main()
{
    cin >> k >> a;
    if((k == 1) && (a == 2)) cout << tablica12;
    else if((k == 2) && (a == 2)) cout << tablica22;
    else if((k == 3) && (a == 2)) cout << tablica32;
    else if((k == 4) && (a == 2)) cout << tablica42;
    else if((k == 5) && (a == 2)) cout << tablica52;
    else if((k == 6) && (a == 2)) cout << tablica62;
    else if((k == 1) && (a == 3)) cout << tablica12;
    else if((k == 2) && (a == 3)) cout << tablica22;
    else if((k == 3) && (a == 3)) cout << tablica32;
    else if((k == 4) && (a == 3)) cout << tablica42;
    else if((k == 5) && (a == 3)) cout << tablica52;
    else if((k == 6) && (a == 3)) cout << tablica62;
    else cout << "0";


}
