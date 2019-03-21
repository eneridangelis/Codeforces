 #include  <bits/stdc++.h>
#define MAX 100005

using namespace std;

bool compare(int i, int j){return (i<j);}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	long long n, aux[100000], cont = 0, answer = 0;

		cin >> n;

		for(long long i = 0; i < n; i++){
			cin >> aux[i];
			cont += aux[i];
		}

		for(long long i = 0; i < n -1; i++){
			cont -= aux[i];
			answer += aux[i]*cont;
		}

		cout << answer << endl;
	

	return 0;
}
