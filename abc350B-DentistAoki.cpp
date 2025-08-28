#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long
#define endl '\n'

using namespace std;

int main(){fastio
    int n, q, value, odds = 0; cin >> n >> q;

    map<int, int> freqs;

    for(int i = 0; i < q; i++){
        cin >> value;
        freqs[value]++;

        if(freqs[value] % 2 == 1){
            odds++;
        }
        else{
            odds--;
        }
    }

    cout << n - odds;
}