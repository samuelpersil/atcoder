#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long
#define endl '\n'
#define MAXN 100001
#define oo 1000000000

using namespace std;

int main(){fastio
    int n, k; cin >> n >> k;

    int arr[n], dp[n];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    dp[0] = 0;
    for(int i = 1; i < n; i++){
        dp[i] = oo;
        for(int j = 1; j <= k; j++){
            if(i - j >= 0){
                dp[i] = min(dp[i], dp[i - j] + abs(arr[i] - arr[i - j]));
            }
        }
    }

    cout << dp[n - 1] << endl;

    return 0;
}