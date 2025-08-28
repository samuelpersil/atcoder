#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long
#define endl '\n'
#define MAXN 200001

using namespace std;

int frequencies[MAXN] = {0};

int main(){fastio
    int n, m, value, winner = 0, biggest_freq = 0; cin >> n >> m;

    for(int i = 0; i < m; i++){
        cin >> value;

        frequencies[value]++;

        if(frequencies[value] > biggest_freq || (frequencies[value] == biggest_freq && value < winner)){
            biggest_freq = frequencies[value];
            winner = value;
        }

        cout << winner << endl;
    }

}