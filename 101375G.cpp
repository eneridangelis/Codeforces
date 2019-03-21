 #include  <bits/stdc++.h>
#define MAX 100005

using namespace std;

bool compare(pair<long long, long long> i, pair<long long, long long> j){return (i.first<j.first);}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	int a[4] = {};

	int n;

	cin >> n;
	int cont = 1;
	for(int i = 0; i < n; i++){
		int aux;
		cin >> aux;
		a[i%4] += aux;
		// if(cont == 1){
		// 	a[0] += aux;
		// }
		// else if(cont == 2){
		// 	a[1] += aux;
		// }
		// else if(cont == 3){
		// 	a[2] += aux;
		// }
		// else if(cont == 4){
		// 	a[3] += a;
		// }
	}

	int maximo = -1;
	int ans;
	for(int i = 0; i < 4; i++){
		if(maximo < a[i]){
			ans = i;
		}
		maximo = max(maximo, a[i]);
	}

	char answer = ans+64+1;

	cout << answer << endl;


	return 0;
}
