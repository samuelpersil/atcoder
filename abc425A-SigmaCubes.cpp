#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long
#define endl '\n'

using namespace std;

int main(){fastio
    int n; cin >> n;
    
    int ans = 0;

    for(int i = 1; i <= n; i++){
        ans += pow(-1, i) * pow(i, 3);
    }

    cout << ans << endl;

    return 0;
}