#include <bits/stdc++.h>

using namespace std;

int get_answer(int n ,string s){
	int i, j;

	char auxi1, auxi2, auxj1, auxj2;

	i = 0;
	j = n - 1;

	while(i < j){
		if(s[i] == s[j]){
			i++;
			j--;
			continue;
		}

		if(s[i] == 'a'){
			auxi1 = 'b';
			auxi2 = 'b';
		}
		else if(s[i] == 'z'){
			auxi1 = 'y';
			auxi2 = 'y';
		}
		else{
			auxi1 = s[i] - 1;
			auxi2 = s[i] + 1;
		}

		if(s[j] == 'a'){
			auxj1 = 'b';
			auxj2 = 'b';
		}
		else if(s[j] == 'z'){
			auxj1 = 'y';
			auxj2 = 'y';
		}
		else{
			auxj1 = s[j] - 1;
			auxj2 = s[j] + 1;
		}

		if(auxi1 == auxj1 || auxi1 == auxj2 || auxi2 == auxj2 || auxi2 == auxj1){
			i++;
			j--;
			continue;
		}
		else{
			return -1;
		}
	}
	return 1;

}

int main(){
	int T, n;
	string s;

	cin >> T;

	while(T > 0){
		cin >> n;
		cin >> s;
		// cout << s;
		// s[0] += 1;
		// cout << s[0];

		if(get_answer(n, s) == 1){
			cout << "YES" << endl;
		}
		else{
			cout << "NO" << endl;
		}



		T--;
	}


	return 0;
}