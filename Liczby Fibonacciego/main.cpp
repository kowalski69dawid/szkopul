#include <iostream>

using namespace std;

int n;

int main() {
	cin >> n;
	int l1 = 0, l2 = 1;
	for(int i = 0; i < n; i++) {
	/*l1	l2
	0	1
	1	1
	2	1
	3	2
	5	3
	8	5 */
	int pom = l1;
	l1 += l2;
	l2 = pom;
	}	
	cout << l1;
}
