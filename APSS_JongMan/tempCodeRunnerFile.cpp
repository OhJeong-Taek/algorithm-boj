int DFS(int r, int c, const string str, int idx){
    //cout << r << " " << c << ' ' << str << ' ' << idx << endl;
    if (r>5 || r<0 || c>5 || c<0){
        return 0;
    }

     if (str.size()-1 == idx && boardArr[r][c] == str[idx]){
        return 1;
    }

    int& res = cache[r][c][idx];
    if (res != -1) return res;

    for (int i=0; i<8; i++){
        if(res = DFS(r + dr[i], c + dc[i], str, idx+1)){
            return res;
        }
    }
    
    return res;
}