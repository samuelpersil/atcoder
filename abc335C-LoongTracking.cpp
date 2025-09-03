#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long
#define endl '\n'
#define F first
#define S second

using namespace std;

int main(){fastio
    ll n, q; cin >> n >> q;

    deque<pair<ll, ll>> parts;

    for(int i = 0; i < n; i++){
        parts.push_back({i + 1, 0});
    }

    while(q--){
        int op; cin >> op;
        if(op == 1){
            char dir; cin >> dir;

            parts.push_front(parts[0]);
            parts.pop_back();

            if(dir == 'R') parts[0].F++;
            else if(dir == 'L') parts[0].F--;
            else if(dir == 'U') parts[0].S++;
            else parts[0].S--;
        }
        else{
            ll part; cin >> part;
            part--;
            cout << parts[part].F << " " << parts[part].S << endl;
        }

    }

}