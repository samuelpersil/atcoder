#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long
#define endl '\n'
#define F first
#define S second
#define MAXN 2001

using namespace std;

int row[MAXN] = {0}, column[MAXN] = {0}, diagonal1 = 0, diagonal2 = 0;

int main(){fastio
    int n, t; cin >> n >> t;

    int turns[t];

    for(int i = 0; i < t; i++){
        cin >> turns[i];
    }

    for(int turn = 0; turn < t; turn++){
        int number = turns[turn];

        number--;
        int y = number / n;
        int x = number % n;

        row[y]++;
        column[x]++;
        if(x == y) diagonal1++;
        if(x + y == n - 1) diagonal2++;
        if(row[y] == n || column[x] == n || diagonal1 == n || diagonal2 == n){
            cout << turn + 1;
            return 0;
        }
    }

    cout << -1;

}