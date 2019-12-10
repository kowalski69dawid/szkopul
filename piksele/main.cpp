#include <iostream>
#include <fstream>

using namespace std;

int pi[200][320];
int piksel;
int main() {
	fstream przyklad("przyklad.txt");
	for(int i = 0; i < 199; i++)
		for(int j = 0; j < 320; j++) {
			przyklad >> pi[i][j];
		}
	for(int i = 0; i < 200; i++)
		for(int j = 0; j < 320; j++)
			if((i + j == 0) || (i+j == 518)) {
				
			}
			else {
				if((abs(pi[i][j] - pi[i-1][j]) > 128)) {
					piksel++;
					cout << "I: " << i << " J: " << j << endl;
					cout << "pi[i-1][j]: " << pi[i -1][j] << " pi[i][j]: " << pi[i][j] << endl;
				}
				else if(abs(pi[i][j] - pi[i][j-1]) > 128> 128) {
					piksel++;
					cout << "I: " << i << " J: " << j << endl;
					cout << "pi[i][j-1]: " << pi[i][j-1] << " pi[i][j]: " << pi[i][j] << endl;			}
			}
	cout << piksel;
}
