#include <iostream>
#include <vector>
#include <cmath>

using namespace std;
int n,p,przedzialow,najw;
void ile_pierwszych() {
    int ile = 0;
    bool *tab;
    cin >> p >> n;
    tab = new bool[n+1];
    for(int i = 2; i <= n; i++)
        tab[i] = true;
    for(int i = 2; i <= n; i++)
        if(tab[i] == true) {
            for(int j = i+i; j <= n; j += i)
                tab[j] = false;
        }
    for(int i = p; i <= n; i++) {
        if(tab[i] == true)
            ile++;
        }
        cout << ile << endl;

    
}
int main()
{
    cin >> najw >> przedzialow;
    for(int i = 0; i < przedzialow; i++) 
        ile_pierwszych();
}
