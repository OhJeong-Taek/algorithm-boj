#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

vector<int> solution(string msg) {
vector<int> answer;
map<string, int> m = {{"A", 1}, {"B", 2}, {"C", 3}, {"D", 4}, {"E", 5}, {"F", 6}, {"G", 7}, {"H", 8}, {"I", 9}, {"J", 10}, {"K", 11}, {"L", 12}, {"M", 13}, {"N", 14}, {"O", 15}, {"P", 16}, {"Q", 17}, {"R", 18}, {"S", 19}, {"T", 20}, {"U", 21}, {"V", 22}, {"W", 23}, {"X", 24}, {"Y", 25}, {"Z", 26}};
 
int cnt = 0;
while (msg.size() > 1) {
    int length = 0;
    int candidate = 0;
    string cur(1, msg[length]);
    cout << cur << endl;
    while (m[cur] > 0 && length < msg.size()) {
        candidate = m[cur];
        cout << "this " << candidate << endl;
        length ++;
        cur += msg[length];
    }

    if (candidate != 0)
        answer.push_back(candidate);

    if (length+1 < msg.size()){
        string next = to_string(msg[length+1]);
        m[cur+next] = m.size() + 1;
    }

    msg = msg.substr(length);
}


return answer;

}

int main(){

    auto v = solution("KAKAO");
    for (auto& i:v){
        cout << i << endl;
    }
    return 0;
}