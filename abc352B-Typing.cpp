#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define endl '\n'
#define ll long long
#define F first
#define S second

using namespace std;

int main(){fastio
    string s, t; cin >> s >> t;

    int sizeS = s.length(), sizeT = t.length(), pointer = 0;

    for(int i = 0; i < sizeT; i++){
        if(pointer < sizeS && t[i] == s[pointer]){
            cout << i + 1 << " ";
            pointer++;
        }
    }
}