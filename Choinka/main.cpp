#include <iostream>

using namespace std;

int a,pom;

void rysuj(int n) {
	if(n == a)
		pom = n+1;
	else
		pom = n;
	for(int i = 0; i <=n *2 -1; i += 2) {
		for(int k = 0; k < pom; k++)
			cout << " ";
		for(int j = 0; j <= i; j++) 
			cout << "*";
	cout << endl;
	pom--;
	}    

}

int main() {
	cin >> a;
    rysuj(a);
    rysuj(a+1);
    for(int i = 0; i < 2; i++) {
	for(int j = 0; j < a+1; j++)
		cout << " ";
		cout << "*" << endl;
	}
}
