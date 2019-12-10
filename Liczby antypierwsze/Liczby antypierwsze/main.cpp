#include <iostream>

using namespace std;
int n, najw, id_najw = 0;

int main()
{
    cin >> n;
    int *tab = new int[n];
    tab[1] = 1;
    tab[2] = 2;
    for(int i = 2; i <= n; i++) {
        for(int j = i; j <= n; j += i)
            tab[j]++;
    }
    najw = tab[0];
    for(int i = 1; i < n; i++) {
        if(tab[i] > najw) {
            id_najw = i;
            najw = tab[i];
        }
    }
    cout << id_najw;
    return 0;
}
