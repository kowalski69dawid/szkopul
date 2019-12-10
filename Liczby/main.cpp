#include <iostream>
#include <algorithm>

using namespace std;
int n,n_najmniejszych,liczba;

int main()
{
    cin >> n >> n_najmniejszych;
    int *tab = new int[n_najmniejszych];
    for(int i = 0; i < n_najmniejszych; i++)
        tab[i] = 1000000000;
    for(int i = 0; i < n; i++) {
        cin >> liczba;
        if(liczba < tab[n_najmniejszych-1]) {
            tab[n_najmniejszych-1] = liczba;
            sort(tab, tab+n_najmniejszych);
        }
    }
    for(int i = 0; i < n_najmniejszych; i++)
        if(tab[i] != tab[i+1])
            cout << tab[i] << endl;
    return 0;
}
