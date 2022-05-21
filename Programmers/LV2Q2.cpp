#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
vector<int> answer;
vector<int> days;

for (int i=0; i<progresses.size(); i++){
    int progress = progresses[i];
    int speed = speeds[i];

    days.push_back(ceil((100-progress)/(double)speed));
}

int max = -1;
for (int i=0; i<days.size(); i++){
    int day = days[i];
    if (day > max) {
        max = day;
        answer.push_back(1);
    } else {
        answer[answer.size() - 1]++;
    }
}

return answer;
}