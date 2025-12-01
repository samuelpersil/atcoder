#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long
#define endl '\n'
#define MAXN 100001
#define oo 1000000000

using namespace std;

int arr[MAXN], dp[MAXN];

int solve(int n){
    if(n < 0) return oo;
    if(n == 0) return 0;
    if(dp[n] != -1) return dp[n];

    return dp[n] = min(solve(n - 1) + abs(arr[n] - arr[n - 1]), solve(n - 2) + abs(arr[n] - arr[n - 2]));
}

int main(){fastio
    int n; cin >> n;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
        dp[i] = -1;
    }

    cout << solve(n - 1) << endl;

    return 0;
}