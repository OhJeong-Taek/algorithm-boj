#include <iostream>
using namespace std;

void recursion(int i, int j, int N){

    if (N > 1 && (i/N)%3 == 1 && (j/N)%3 ==1){
        recursion(i, j, N/3);
    } else {
        cout << ((i%3==1 && j%3==1) ? " " : "*");
    }
}

int main(){

    int N=9;
    for (int i=0; i<N; i++){
        for (int j=0; j<N; j++){
            recursion(i,j,N);
        }
        cout << endl;
    }
    
    return 0;
}