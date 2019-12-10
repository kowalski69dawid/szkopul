#include <iostream>
#include <cmath>

using namespace std;
int n;
int main()
{
    cin >> n;
    long double tab[n][3];
    long double najwodl = 0,najmodl = 1000000000,dl;
    for(int i = 0; i < n; i++)
        cin >> tab[i][0] >> tab[i][1] >> tab[i][2];
    for(int i = 1; i < n; i++)
        for(int j = 0; j < n; j++) {
            if(i != j) {
                dl = sqrt(pow(tab[i][0] - tab[j][0],2) + pow(tab[i][1]-tab[j][1],2) + pow(tab[i][2] - tab[j][2],2));
                if(dl > najwodl) najwodl = dl;
                if(dl < najmodl) najmodl = dl;
            }
        }
    cout.precision(2);
    printf("%.2Lf", najmodl);
    printf(" %.2Lf", najwodl);
}
