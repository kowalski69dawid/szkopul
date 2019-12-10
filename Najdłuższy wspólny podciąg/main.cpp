#include <iostream>

using namespace std;

string napis1, napis2;
int maxdl = 0;
int main() {
	cin >> napis1 >> napis2;
	int ** t = new int * [napis1.length()+1];
	for(int i = 0; i <= napis2.length(); i++)
		t[i] = new int[napis2.length()+1];

	for(int i = 0; i <= napis1.length(); i++)
		t[i][0] = 0;
	for(int i = 0; i <= napis2.length(); i++)
		t[0][i] = 0;
	for(int i = 1; i <= napis1.length(); i++) {
		for(int j = 1; j <= napis2.length(); j++) {
			if(napis1[i-1] != napis2[j-1]) t[i][j] = 0;
			else {
				t[i][j] = t[i-1][j-1] + 1;
				if(t[i][j] > maxdl)
					maxdl = t[i][j];

			}	
		}
	}
	cout << maxdl << endl;
}
