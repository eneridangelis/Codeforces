#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, i =0, aux;
	vector<int> a;

	cin >> n;
	while(i < n){
		cin >> aux;
		a.push_back(aux);

		i++;
	}
	i = 0;
	while (i < n){
			if(a[i] % 2 == 0){
				a[i] -= 1; 
				if(a[i] == a[i+1]){
					a[i] += 1;
				}
			}
		i++;
	}

	i = 0;
	while(i < a.size()){
		cout << a[i] << " ";
		i++;
	}
	cout << endl;

	return 0;
}