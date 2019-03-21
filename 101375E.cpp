 #include  <bits/stdc++.h>
#define MAX 100005

using namespace std;

bool compare(pair<long long, long long> i, pair<long long, long long> j){return (i.first<j.first);}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	long long n, s;

	cin >> n >> s;
	vector <pair <long long, long long>> v;

	long long cont = s;
	long long sum = 0;

	for(int i = 0; i < n; i++){
		pair <long long, long long> aux;
		cin >> aux.first >> aux.second;
		v.push_back(aux);
	}

	sort(v.begin(), v.end(), compare);

	// for(int i = 0; i < n; i++){
	// 	cout << v[i].first << " " << v[i].second << endl;
	// }

	for(int i = 0; i < n; i++){
		cont += v[i].first;
		sum += cont - v[i].second;
	}

	cout << sum << endl;

	return 0;
}
