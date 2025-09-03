#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define endl '\n'
#define ll long long
#define MAXN 500

using namespace std;

int n, m, l;
string matrix[MAXN], moves;

bool possible(int i, int j){
    for(char move : moves){
        if(move == 'U' && i - 1 >= 0){
            i--;
        }
        else if(move == 'D' && i + 1 < n){
            i++;
        }
        else if(move == 'L' && j - 1 >= 0){
            j--;
        }
        else if(move == 'R' && j + 1 < m){
            j++;
        }
        else return false;
        if(matrix[i][j] == '#') return false;
    }

    return true;
}

int main(){fastio
    int answer = 0;
    cin >> n >> m >> l;
    
    cin >> moves;

    for(int i = 0; i < n; i++){
        cin >> matrix[i];
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(matrix[i][j] == '.' && possible(i, j)){
                answer++;
            }
        }
    }

    cout << answer;
}