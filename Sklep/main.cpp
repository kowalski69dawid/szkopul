#include <iostream>

using namespace std;

int towar, operacji, ilosc, max_id_towar = 0,ile;

int main() { 
	cin >> operacji;
	int ** tablica = new int * [2];
	tablica[0] = new int [operacji];
	tablica[1] = new int [operacji];

	for(int i = 0; i < operacji; i++) {
		cin >> towar >> ilosc;
		bool dodano = false;
		for(int j = i; j >= 0; j--) {
			if(tablica[0][j] == towar) {
				tablica[1][j] += ilosc;
				dodano = true;
			}
		}
		if(dodano == false) {
			ile++;
			tablica[0][i] = towar;
			tablica[1][i] = ilosc;	
		}
	}
	cout << ile << endl;
	for(int i = 0; i < operacji; i++) {
		if(tablica[1][i] > 0) 
			cout << tablica[0][i] << " " << tablica[1][i] << endl;

	}
}
