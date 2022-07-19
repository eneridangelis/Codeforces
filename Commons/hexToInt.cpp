#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int parseHexInt(string hex) {
    int res = 0;
    for(int i = hex.size() - 1; i >= 0 ; i--) {
        if(int(hex[i]) >= 65 && int(hex[i]) <= 70) {
            res += (int(hex[i]) - 55)  * int(pow(16.0, float(hex.size() - 1 - i)));
        } else {
            res += (int(hex[i]) - 48) * int(pow(16.0, float(hex.size() - 1 - i)));
        }
    }
    return res;
}

int main() {
   cout << parseHexInt("A") << endl; 
   cout << parseHexInt("1F") << endl;
   cout << parseHexInt("0") << endl;
   
   return 0;
}