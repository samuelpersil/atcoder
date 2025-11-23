#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long
#define endl '\n'
#define F first
#define S second

using namespace std;

int main(){fastio
    int n; cin >> n;

    pair<int, int> types[n];

    for(int i = 0; i < n; i++){
        cin >> types[i].F >> types[i].S;
    }

    int q; cin >> q;

    while(q--){
        int t, d; cin >> t >> d;
        t--;

        int answer = d + ((types[t].S - d) % types[t].F + types[t].F) % types[t].F;

        cout << answer << endl;
    }

    return 0;
}