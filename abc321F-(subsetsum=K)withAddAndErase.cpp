#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long
#define endl '\n'
#define MOD 998244353
 
using namespace std;
 
int main(){fastio
    int q, k; cin >> q >> k;

    vector<int> dp(k + 1, 0);
    dp[0] = 1;

    while(q--){
        char op;
        int n;

        cin >> op >> n;
        if(op == '+'){
            for(int i = k; i >= n; i--){
                dp[i] = (dp[i] + dp[i - n]) % MOD;
            }
        }
        else{
            for(int i = n; i <= k; i++){
                dp[i] = (dp[i] - dp[i - n] + MOD) % MOD;
            }
        }

        cout << dp[k] << endl;
    }
 
    return 0;
}