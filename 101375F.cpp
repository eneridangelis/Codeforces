 #include  <bits/stdc++.h>
#define MAX 100005

using namespace std;

bool compare(int i, int j){return (i<j);}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);


	double n;

	cin >> n;

	double aux, cont = 0.0;

	for(int i = 0; i < n; i++){
		cin >> aux;
		cont += aux;
	}

	cout << ceil(cont/5) << endl;


	return 0;
}
