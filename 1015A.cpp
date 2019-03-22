#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, m, i= 0, aux, aux2, check = 0;
	vector<int> l, r, k;

	cin >> n >> m;
	while(i < n){
		cin >> aux >> aux2;
		l.push_back(aux);
		r.push_back(aux2);
		i++;
	}

	i = 1;
	while(i <= m){
		for(int j = 0; j < l.size(); j++){
			if(i >= l[j] && i <= r[j]){
				check++;
			}
		}
		if(check == 0){
			k.push_back(i);
		}
		check = 0;

		i++;
	}


	if(k.size() == 0){
		cout << "0" << endl;
	}
	else{
		cout << k.size() << endl;
		i = 0;
		while(i < k.size()){
			cout << k[i] << " ";
			i++;
		}
		cout << endl;
	}

	return 0;
}