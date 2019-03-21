#include  <bits/stdc++.h>
#define MAX 100005

using namespace std;

bool compare(int i, int j){return (i<j);}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

    int n, count = 0;
    vector <int> a;

    cin >> n;

    for(int i = 0; i < n; i++){
    	int aux;
    	cin >> aux;
    	a.push_back(aux);
    }

    // for(int i = 0; i < n; i++){
    // 	cout << a[i] << " ";
    // }
    // cout << endl;

    sort(a.begin(), a.end());

    for(int i = 0; i < n; i += 2){
    	count += a[i+1] - a[i];
    }
    

    cout << count << endl;

  
	return 0;
}