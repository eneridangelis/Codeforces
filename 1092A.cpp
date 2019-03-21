 #include  <bits/stdc++.h>
#define MAX 100005

using namespace std;

bool compare(int i, int j){return (i<j);}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

    int n, k, t;

    cin >> t;

    while(t--){
    	cin >> n >> k;

    	int f;

    	f = floor(n/k);
		
		char letter = 'a' + k-1;
    	while(n--){
    		int j = 0;
    		bool flag = false;
    		if(letter == 'a'){
    			cout << "a";
    		}
    		else{
   				while(j < f){
   					if(flag == true){
   						n--;
   					}
    				cout << letter;
   					j++;
   					flag = true;
   				}
   				letter--;
   			}
       	}
    	cout << endl;

    }    
  
	return 0;
}