#include <bits/stdc++.h>

using namespace std;

int main(){
	long long m, n, a;

	cin >> n >> m >> a;
	// cout << n << " " << m << " " << a << endl;

	// aux = ceil(float(m)/float(a));
	// aux2 = ceil(float(n)/float(a));

	// while(aux <= n){
	// 	aux += a;
	// 	i++;
	// }
	// if(aux < n){
	// 	i++;
	// }
	// while (aux2 <= m){
	// 	aux2 += a;
	// 	j++;
	// }
	// if(aux2 < m)
	// {
	// 	j++;
	// }

	cout << ((n + a - 1) / a) * ((m + a - 1) / a) << endl;

	return 0;

}