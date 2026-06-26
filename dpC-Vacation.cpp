#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long
#define endl '\n'

using namespace std;

int n;
vector<int> a, b, c;
vector<vector<int>> dp;

int rec(int i, int j){
    if(i >= n){
        return 0;
    }
    if(dp[i][j] != -1){
        return dp[i][j];
    }

    if(j == 0) return dp[i][j] = a[i] + max(rec(i + 1, 1), rec(i + 1, 2));
    else if(j == 1) return dp[i][j] = b[i] + max(rec(i + 1, 0), rec(i + 1, 2));
    else return dp[i][j] = c[i] + max(rec(i + 1, 0), rec(i + 1, 1));    
}

int main(){fastio
    cin >> n;

    dp.assign(n, vector<int>(3, -1));
    a.resize(n); 
    b.resize(n); 
    c.resize(n);
    
    for(int i = 0; i < n; i++){
        cin >> a[i] >> b[i] >> c[i];
    }

    cout << max({rec(0, 0), rec(0, 1), rec(0, 2)}) << endl;

    return 0;
}