#include <iostream>
#include <string>
#include <math.h>
using namespace std;

unsigned long long  a,b,i = 2,palindroliczba,c;
string podstawa;

int main()
{
    cin >> a;
    /*for(i = 2; i <= 10; i++) {
        podstawa.clear();
        b = a;
        palindroliczba = 0;
        while(b != 0) {
            podstawa += to_string(b%i);
            b = b/i;
        }
        //cout << i << " " << podstawa << endl;
        for(int j = 1; j <= podstawa.length()/2; j++)
            if(podstawa[j - 1] == podstawa[podstawa.length() -j])
                palindroliczba++;
        if(palindroliczba == podstawa.length()/2) {
            cout << i << " " << podstawa << endl;
            c++;
        }
    }
    if(c == 0)
        cout << "NIE" << endl;*/
    cout.setf( ios::hex, ios::basefield );
    cout << pow(10,1000);
}
