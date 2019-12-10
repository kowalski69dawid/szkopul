#include <iostream>

using namespace std;

int sign(int l) {
    if(l < 0) return -1;
    else if(l == 0) return 0;
    else if(l > 0) return 1;
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << sign(a) + sign(b);
    
}
