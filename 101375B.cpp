 #include  <bits/stdc++.h>
#define MAX 100005

using namespace std;

struct point{
	double x, y;
};

bool compare(int i, int j){return (i<j);}


double d(struct point p1, struct point p2){
	return sqrt((p1.x-p2.x)*(p1.x-p2.x)+(p1.y-p2.y)*(p1.y-p2.y));
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);


	struct point wil, russo, aux;

	cin >> russo.x >> russo.y;
	cin >> wil.x >> wil.y;

	aux.x = 0.0;
	aux.y = 0.0;

	double d1, d2;

	d1 = d(russo, aux);
	d2 = d(wil, aux);

	if(d1 < d2){
		cout << "Russo" << endl;
	}
	else if(d2 < d1){
		cout << "Wil" << endl;
	}
	else{
		cout << "Empate" << endl;
	}
	



	return 0;
}
