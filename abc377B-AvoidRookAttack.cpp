#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long
#define endl '\n'
#define F first
#define S second

using namespace std;

int main(){fastio
    string matrix[8];

    int line_oc[8] = {0};
    int column_oc[8] = {0};
    int answer = 0;

    for(int i = 0; i < 8; i++){
        cin >> matrix[i];
    }

    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            if(matrix[i][j] == '#'){
                line_oc[i] = 1;
                column_oc[j] = 1;
            }
        }
    }

    for(int i = 0; i < 8; i++){
        if(line_oc[i]) continue;
        for(int j = 0; j < 8; j++){
            if(column_oc[j]) continue;
            answer++;
        }
    }

    cout << answer;

}