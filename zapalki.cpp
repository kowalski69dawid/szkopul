#include <iostream>

using namespace std;

int n, nciag, ociag;

int main()
{
    cin >> n;
    int tab[n];
    for(int i = 0; i < n; i++)
        cin >> tab[i];
    for(int i = 0; i < n; i++) {
        for(int j = i; j < n; j++)
            if(tab[j] < tab[j-1])
                ociag++;
            else
                break;
        for(int j = i; j > 0; j--)
            if(tab[j] < tab[j+1])
                ociag++;
            else
                break;
        if(nciag < ociag)
            nciag = ociag;
        ociag = 0;
    }// for i
    cout << nciag + 2;
} //main
