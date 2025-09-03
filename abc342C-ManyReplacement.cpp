#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long
#define endl '\n'

using namespace std;

int main(){
    int n, q;
    string s;


    char new_abc[26];

    for(int i = 0; i < 26; i++){
        new_abc[i] = i + 'a';
    }


    cin >> n >> s >> q;

    while(q--){
        char a, b; cin >> a >> b;

        for(int i = 0; i < 26; i++){
            if(new_abc[i] == a){
                new_abc[i] = b;
            }
        }
    }

    for(int i = 0; i < n; i++){
        cout << new_abc[s[i] - 'a'];
    }

    cout << endl;
}