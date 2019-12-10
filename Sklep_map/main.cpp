#include <iostream>

#include <map>
#include <vector>
using namespace std;

int towar, operacji, ilosc;

int main() { 
	vector<int> kolejnosc;
	map<int, int> towary;

	cin >> operacji;
	pair <int, int> wiersz;
	for(int i = 0; i < operacji; i++) {
		cin >> towar >> ilosc;
		wiersz.first = towar;
		wiersz.second = ilosc;
		pair< map<int, int>::iterator, bool > p = towary.insert(wiersz);
		if(p.second)
		{
			kolejnosc.push_back(towar);
		}
		else
		{
			p.first->second += ilosc;
		}
	}

	cout << kolejnosc.size() << endl;
	for(unsigned int i = 0; i<kolejnosc.size(); i++) {
		int j = kolejnosc[i];
		cout << j << " " <<	towary[j] << endl;
	}

	return 0;
}
