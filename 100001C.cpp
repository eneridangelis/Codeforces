#include  <bits/stdc++.h>
#define MAX 100005

using namespace std;

struct point{
    double x, y;
};

bool compare(int i, int j){return (i<j);}

double d(point p1, point p2){
    return sqrt((p1.x-p2.x)*(p1.x-p2.x)+(p1.y-p2.y)*(p1.y-p2.y));
}

double a(double a, double b, double c){
    return acos(((a*a)+(b*b)-(c*c))/(2*b*a));
}

double gcd(double a, double b){
    if(b+1e-4 > 0 && b-1e-4 < 0){
        return a;
    }
    else if(a+1e-4 > 0 && a-1e-4 < 0){
        return b;
    }
    else{
        return gcd(b, fmod(a, b));
    }
}

double giveanswer(double r, double ang){
    return 0.5*r*r*sin(ang)*(2*(acos(-1.0))/ang);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    double d1, d2, d3, p, s, r, a1, a2, a3, ang, answer;

    point p1, p2, p3;

    cin >> p1.x >> p1.y >> p2.x >> p2.y >> p3.x >> p3.y;


    d1 = d(p1, p2);
    d2 = d(p1, p3);
    d3 = d(p2, p3);

    p = (d1+d2+d3)/2;
    s = sqrt(p*(p-d1)*(p-d2)*(p-d3));
    r = (d1*d2*d3)/(4*s);

    a1 = a(r, r, d1);
    a2 = a(r, r, d2);
    a3 = (2*acos(-1.0))-(a1+a2);
    ang = gcd(a1, gcd(a2, a3));

    answer = giveanswer(r, ang);

    cout << fixed << setprecision(6) << answer << endl;

    return 0;
}