#include<iostream>
#include<cstdlib>
#include<cmath>
using namespace std;
 
int n, pierw, pom, ile, dzielniki = 1;

int main()
{
        cin>>n;
        for(int i = 0; i < n; i++) {
            pierw = sqrt(n);
            int *tab = new int[pierw];
            int k=2; 
            
            while(n>1&&k<=pierw) {
                    while(n%k==0) {
                            n/=k;
                            ile++;
                    }
                    ++k;
            }
            cout << ile; 
            for(int i = 0; i < pierw; i++)
                if(tab[i] > 0) {
                    cout << i << " " << tab[i] << endl;
                    dzielniki *= tab[i]+1;
                }
            cout << dzielniki << endl;
        }
    return 0;
}
