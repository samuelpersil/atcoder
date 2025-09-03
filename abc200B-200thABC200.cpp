#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define endl '\n'
#define ll long long

using namespace std;

int main(){fastio
    ll n, k; cin >> n >> k;

    while(k--){
        if(n % 200 == 0){
            n /= 200;
        }
        else{
            n = n * 1000 + 200;
        }
    }

    cout << n;


}