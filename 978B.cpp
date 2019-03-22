#include <bits/stdc++.h>

using namespace std;


int main(){
	int n, i = 0, j = 0;
	string s;

	cin >> n;
	cin >> s;

	while(i < n){

		if(s[i] == 'x' && s[i+1] == 'x' && s[i+2] == 'x'){
				j++;
			}
		i++;
	}

	if(j > 0){
		cout << j << endl;
	}
	else{
		cout << "0" << endl;
	}

	return 0;
}
