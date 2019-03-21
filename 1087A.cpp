 #include  <bits/stdc++.h>
#define MAX 100005

using namespace std;

bool compare(int i, int j){return (i<j);}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

    string s;

    cin >> s;

    if(s.size() == 1){
    	cout << s << endl;
    	return 0;
    }

    int n = floor(s.size()/2);
    string aux;
    int left, right;

    if(s.size()%2 == 0){
    	aux = s[n-1];
		left = n;
    	right = n-2;
	}
	else{
		aux = s[n];
		left = n+1;
		right = n-1;
	}
    for(int i = 1; i < s.size(); i++){
    	// cout << left << " " << right << endl;
    	if(i%2 == 0 && right >= 0){
    		// cout << "lala" << endl;
    		aux.append(s, right, 1);
    		right--;
    	}
    	else if(left < s.size()){
    		aux.append(s, left, 1);
    		left++;
    	}
    }

    cout << aux << endl;
  
	return 0;
}
