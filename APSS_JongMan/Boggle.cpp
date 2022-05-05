#include <iostream>
#include <vector>

using namespace std;
char boardArr[5][5]; // 이중 array 넘기는 법 알기
int cache[5][5][10];

bool DFS(int r, int c, const string str, int idx, bool& res){
    //cout << r << " " << c << ' ' << str << ' ' << idx << endl;
    if (r>5 || r<0 || c>5 || c<0){
        return false;
    }

    if (boardArr[r][c] != str[idx])
        return false;
    
    if (idx >= str.size()) {
        return false;
    }

    if (str.size()-1 == idx){
        res = true;
        return true;
    }

    DFS(r-1,c,str, idx+1, res); //up
    DFS(r-1,c+1,str, idx+1, res); 
    DFS(r,c+1,str, idx+1, res); // right
    DFS(r+1,c+1,str, idx+1, res);
    DFS(r+1,c,str, idx+1, res); // down
    DFS(r+1,c-1,str, idx+1, res);
    DFS(r,c-1,str, idx+1, res); // left
    DFS(r-1,c-1,str, idx+1, res);

    return false;
}

bool existStringInBoard(const string str){
    
    bool exist = false; 
    for (int i=0; i<5; i++){
        for (int j=0; j<5; j++){
            bool val = DFS(i,j,str,0, exist);
            if (val) {
                break;
            }
        }
    }

    return exist;
}

void existCandidatesInBoard(const vector<string>& candidates){
    for(int i=0; i<candidates.size(); i++){
        const string& c = candidates[i]; // 코테에서 삽질한거
        const string str = existStringInBoard(c) == true ? "YES" : "NO";
        cout << c << ' '<< str << '\n';
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    freopen("input.txt", "r", stdin);

    clock_t begin_time = clock();
    
    int C, N;
    cin >> C;

    for (int tc = 0; tc<C; tc++){
        vector<string> candidates;

        for (int i=0; i<5; i++){
            for (int j=0; j<5; j++){
                cin >> boardArr[i][j];
            }
        }

        cin >> N;
        for (int i=0; i<N; i++){
            string s;
            cin >> s;
            candidates.push_back(s);
        }
        
        existCandidatesInBoard(candidates);
    }
    
    std::cout << float( clock () - begin_time ) /  CLOCKS_PER_SEC;

    return 0;
}