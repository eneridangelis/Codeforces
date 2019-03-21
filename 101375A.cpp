 #include  <bits/stdc++.h>
#define MAX 100005

using namespace std;

bool compare(int i, int j){return (i<j);}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	long long n;

	cin >> n;

	long long cont = 0;

	// for(long long i = 0; i < n-1; i++){
	// 	cont += i;
	// 	// cont--;
	// 	// if(n < n-1){
	// 	// 	cont--;
	// 	// }
	// 	// aux++;
	// }
	// cont += n;

	cont = ((n*(n+1))/2) - (n-1);

	cout << cont << endl;


	return 0;
}
