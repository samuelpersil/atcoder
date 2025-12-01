#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long
#define endl '\n'
#define MAXN 100001

using namespace std;

int main(){fastio
    int n; cin >> n;

    int arr[n], dp[n];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    for(int i = 0; i < n; i++){
        if(i == 0) dp[i] = 0;
        else if(i == 1) dp[i] = abs(arr[i] - arr[i - 1]);
        else dp[i] = min(dp[i - 1] + abs(arr[i] - arr[i - 1]), dp[i - 2] + abs(arr[i] - arr[i - 2]));
    }

    cout << dp[n - 1] << endl;

    return 0;
}