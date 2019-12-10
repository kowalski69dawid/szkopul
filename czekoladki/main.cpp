#include <iostream>

using namespace std;

int tab[4];

int main() {
	for(int i = 0; i < 4; i++) {
		cin >> tab[i];
	}
	cout << tab[0]*tab[1] + tab[2]*tab[3];
}
