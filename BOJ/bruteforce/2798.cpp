#include <iostream>
#include <vector>

using namespace std;

int main(){
    freopen("input.txt", "r", stdin);
    int N,M;
    cin >> N >> M;
    vector<int> options;
    for (int i=0; i<N; i++){
        int val;
        cin >> val;
        options.push_back(val);
    }

    int closest = -1;
    for (int i=0; i<options.size()-2; i++){
        for (int j=i+1; j<options.size()-1; j++){
            for (int k=j+1; k<options.size(); k++){
                int sum = options[i] +
                cout << i << ' ' << j << ' '  << k << endl;
            }
        }
    }

    return 0;
}