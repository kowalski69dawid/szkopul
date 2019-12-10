#include <iostream>

using namespace std;
int n,l = 2;
int main() {
	cin >> n;
	while(n%l == 0)
		l++;
	cout << l << " ";
	l = n;
	while(n%l == 0)
		l--;
	cout << l;

}
