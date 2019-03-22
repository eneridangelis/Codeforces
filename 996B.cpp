#include <bits/stdc++.h>

using namespace std;

int main(){

int n, m = 1000000001;
	
	cin >> n;
    vector<int> a(n);

	for(int i = 0; i < n; i++){
		cin >> a[i];
        m = min(m, a[i]);
	}
    for(int i = 0; i < n; i++){
        a[i] -= m;
    }
    int aux = 0;
    for(int i = m % n; i < n; i++){
        if(a[i] <= aux){
            cout << i + 1 << endl;
            break;
        }
        aux++;
        if(i == n - 1){
            i = -1;
        }
    }
    return 0;
}