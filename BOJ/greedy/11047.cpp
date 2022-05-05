#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    freopen("input.txt", "r" , stdin);

    int N, K;
    cin >> N >> K;

    vector<int> coins;

    for (int i=0; i<N; i++){
        int val;
        cin >> val;
        coins.push_back(val);
    }

    int ans=0;
    for (int i=N-1; i>=0; i--){
        int coin = coins[i];
        int quotiant = K/coin;
        ans += quotiant > 0 ? quotiant : 0;
        K -= quotiant * coin;
    }

    cout << ans << endl;
    return 0;
}