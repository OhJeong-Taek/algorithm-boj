#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    freopen("input.txt", "r", stdin);
    
    int cntArr[7] = {0};
    for(int i=0; i < 3; i++){
        int val;
        cin >> val;
        cntArr[val]++;
    }

    int sum = 0;
    int max = -1;
    for (int i=1; i<=6; i++){
        int cnt = cntArr[i];
        if (cnt == 3) {
            sum = 10000 + 1000*i;
            break;
        } else if (cnt == 2){
            sum = 1000 + 100*i;
            break;
        } 
        
        if (cnt > 0) {
            max = i;
        }
    }

    if (sum == 0) {
        sum = 100*max;
    }
    cout << sum << endl;
    return 0;
}