#include <iostream>
#include <fstream>

using namespace std;

string linia;

int main() {
	fstream uchwyt;
	uchwyt.open("przyklad.txt");
	for(int i = 40; i < 1000; i += 40) {
		uchwyt >> linia;
		cout << i << " " << linia << " " << linia[9] << endl;
	}

}
