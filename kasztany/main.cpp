#include <iostream>

using namespace std;
int ldz, ile;
int main() {
	cin >> ldz;
	int *suma_kasztanow = new int[ldz];
	for(int i = 0; i < ldz; i++) {
		int dni = 0;
		cin >> dni;
		for(int j = 0; j < dni; j++) {
			cin >> ile;
			suma_kasztanow[i] += ile;
		}
	}
	for(int i = 0; i < ldz; i++)
		cout << suma_kasztanow[i] << endl;

}
