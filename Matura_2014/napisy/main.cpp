#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

string linie[1000];
string linia;
int suma_ascii,pierwszych;
vector <string> wyswietlone;
void czy_pierwsza(string linia) {
	suma_ascii = 0;
	for(int i = 0; i <= linia.length()-1; i++) {
        	suma_ascii += (int)linia[i];
    	}
    	for(int i = 2; i <= suma_ascii-1; i++) {
        	if(suma_ascii%i == 0) 
			break;
        	if(i == suma_ascii-1)
            		pierwszych++;
    }
}

void czy_rosnaca(string linia) {
    for(int i = 1; i <= linia.length() - 1; i++) {
	//cout << (int)linia[i] - (int)linia[i-1] << endl; 
        if((int)linia[i] - (int)linia[i-1] <= 0) {
		//cout << (int)linia[i] - (int)linia[i-1] << endl;
		break;
	 }
        if(i == linia.length()-1) 
		cout << linia << endl;
    }
}

void czy_powtarzalna() {
	for(int i = 0; i <= 998; i++) {
		for(int j = i+1; j <= 999; j++) {
			if(linie[i] == linie[j]) {
				for(int k = 0; k < wyswietlone.size(); k++) {
					if(wyswietlone[k] == linie[j])
						break;
					if(k == wyswietlone.size() - 1)
						wyswietlone.push_back(linie[j]);
				}
			}
		}
	}
}

int main() {
	fstream uchwyt;
	uchwyt.open("NAPIS.TXT");
	for(int i = 0; i < 1000; i++) {
		uchwyt >> linia;
		czy_pierwsza(linia);
		czy_rosnaca(linia);
		linie[i] = linia;
	}
	czy_powtarzalna();
	cout << pierwszych << endl;
	for(int i = 0; i < wyswietlone.size(); i++)
		cout << wyswietlone[i] << endl;
    	return 0;
}
