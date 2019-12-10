#include <iostream>

using namespace std;
int najw,n;
int main() {
    cin >> n;
    int wys[n];
    int war[n][2];
    for(int i = 0; i < n; i++)
        cin >> wys[i];
    najw = wys[0];
    war[0][0] = najw;
    for(int i = 1; i < n; i++) {
        if(wys[i] > najw) najw = wys[i];
        war[i][0] = najw;
        
    }
    najw = wys[n-1];
    for(int i = n-1; i >= 0; i--) {
        if(najw < wys[i]) najw = wys[i];
        war[i][1] = najw;
    }
    for(int i = 0; i < n; i++)
        cout << war[i][0] << " " << war[i][1] << endl;
    return 0;
} 
