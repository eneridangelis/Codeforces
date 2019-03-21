 #include  <bits/stdc++.h>
#define MAX 100005

using namespace std;

bool compare(int i, int j){return (i<j);}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t;

	cin >> t;

	while(t--){
		int a, b, cont = 0;
		cin >> a >> b;

		if(abs(a-b) <= 1){
			cout << "Ok" << endl;
		}
		else{
			cont = a + b;
			if(cont%2 == 0){
				cout << cont/2 << " " << cont/2 << endl;
			}
			else{
				cout << cont/2 << " " << (cont/2)+1 << endl;	
			}
		}
	}

	return 0;
}
