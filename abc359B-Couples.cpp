#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr);
#define ll long long
#define endl '\n'

using namespace std;

int main(){fastio
    int n; cin >> n;
    int arr[2 * n];
    int ans = 0;
    for(int &x : arr) cin >> x;
    for(int i = 0; i < 2 * n - 2; i++){
        if(arr[i] == arr[i + 2]) ans++;
    }
    cout << ans << endl;
}