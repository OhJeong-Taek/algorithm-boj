#include <iostream>

using namespace std;

int recursion(int n){
    if (n==1 || n==0){
        return 1;
    }

    return n * recursion(n-1);
}

int main(){
    int n;
    cin >> n;

    cout << recursion(n) << endl;
    return 0;
}