#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long
#define endl '\n'

using namespace std;

int main(){
    ll n; cin >> n;

    ll array[n], sum = 0, x, answer = 0;

    for(int i = 0; i < n; i++){
        cin >> array[i];
        sum += array[i];
    }
    
    cin >> x;

    int i = 0;

    answer += (x/sum) * n;

    x = x % sum;

    while(x >= 0){
        x -= array[i];
        i++;
    }

    cout << i + answer;
}