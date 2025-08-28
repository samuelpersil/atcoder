#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long
#define endl '\n'

using namespace std;

int main(){fastio
    int n, m; cin >> n >> m;

    int a[n], b[m];

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    for(int i = 0; i < m; i++){
        cin >> b[i];
    }

    sort(a, a + n);
    sort(b, b + m);

    if(n == 1){
        cout << "No";
        return 0;
    }

    int l = 0;

    for(int i = 0; i < n - 1; i++){
        bool inmiddle = false;
        while(b[l] < a[i + 1]){
            if(b[l] > a[i] && b[l] < a[i + 1] && l < m){
                inmiddle = true;
                break;
            }
            l++;
        }
        if(!inmiddle){
            cout << "Yes";
            return 0;
        }
    }

    cout << "No";

}