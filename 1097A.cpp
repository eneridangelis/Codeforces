 #include  <bits/stdc++.h>
#define MAX 100005

using namespace std;

bool compare(int i, int j){return (i<j);}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	string card;

	cin >> card;

	string aux;
	for(int i = 0; i < 5; i++){
		cin >> aux;

		if(card[0] == aux[0]){
			cout << "YES" << endl;
			return 0;
		}
		if(card[1] == aux[1]){
			cout << "YES" << endl;
			return 0;
		}
	}

	cout << "NO" << endl;

	return 0;
}
