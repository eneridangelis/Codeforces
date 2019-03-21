 #include  <bits/stdc++.h>
#define MAX 100005

using namespace std;

bool compare(pair<long long, long long> i, pair<long long, long long> j){return (i.first<j.first);}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	long long l = 1, r = 1000000000;

	while(l <= r){
		long long p;
		char c;

		p = (l+r)/2;

		cout << "Q" << " " << p << endl;
		cout.flush();

		cin >> c;

		if(c == '>'){
			l = p + 1;
		}
		else{
			r = p - 1;
		}

	}

	cout << "Q" << " " << l << endl;

	return 0;
}
