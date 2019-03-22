#include <bits/stdc++.h>

using namespace std;

bool myfunction(string i, string j){
	int n = i.length();
	int m = j.length();
	if(n == m){
		return (i<j);
	}
	return n<m;
}

int main(){
	int n;
	string aux;
	vector <string> lista;

	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> aux;
		lista.push_back(aux);
	}

	sort(lista.begin(), lista.end(), myfunction);

	// for(int i = 0; i < n; i++){
	// 	cout << lista[i] << endl;
	// 	// lista.insert(aux);
	// }

	for(int i = 1; i < n; i++){
		for(int j = 0; j < i; j++){
			if(lista[i].find(lista[j]) == -1){
				cout << "NO" << endl;
				return 0;
			}
		}
	}

	cout << "YES" << endl;

	for(int i = 0; i < n; i++){
		cout << lista[i] << endl;
		// lista.insert(aux);
	}



	return 0;
}