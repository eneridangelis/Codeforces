#include <bits/stdc++.h>

using namespace std;

int main (){
	int n, aux = 0, i = 0, count = 0;
	cin >> n;
	int v[n], maior, menor;
	cin >> v[0];
	aux = v[0];
	for(int i=1; i<n; i++){
		cin >> v[i];
	}
	maior = v[0];
	menor = v[0];
	for(int i = 1; i < n; i++){
		if(v[i] > maior){
			count++;
			maior = v[i];
		}
		else if(v[i] < menor){
			count++; 
			menor = v[i];
		}
	}
	
	
	cout << count << endl;
	



return 0;
}