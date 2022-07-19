#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

//auxiliar function to compare two integers
bool compare(int i, int j) {return (i>j);}

void largestSum(vector<int> arr) {
    int firstValue = arr[0];
    int scndValue = arr[1];
    
    for(int i = 2; i < arr.size(); i++) {
        int val = arr[i];
        if(compare(val, firstValue)) {
            if(compare(firstValue, scndValue)) {
                scndValue = firstValue;
            }
            firstValue = val;
        } else if(compare(val, scndValue)){
            if(compare(scndValue, firstValue)) {
                scndValue = firstValue;
            }
            scndValue = val;
        }
    }
    
    cout << firstValue << " " << scndValue << endl;
}

int main() {
    vector<int> arr1{1, 10, 3, 7, 9};
    vector<int> arr2{-2, 1, -1, 0};
    
    largestSum(arr1);
    largestSum(arr2);

    return 0;
}
