#include <iostream>
#include <math.h>

using namespace std;
int liczba, pierwiasteki;
float pierwiastekf;
int main() {
	cin >> liczba;
	do {
	pierwiasteki = sqrt(liczba);
	pierwiastekf = sqrt(liczba);
	cout << liczba << " ";
	liczba++;
	} while(pierwiastekf != pierwiasteki);
	
}
