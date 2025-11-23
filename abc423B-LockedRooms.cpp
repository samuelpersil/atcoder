#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long
#define endl '\n'

using namespace std;

const int oo = 1e9;

int32_t main(){fastio
	int n; cin >> n;

	int arr[n], l = oo, r = 0;

	for(int i = 0; i < n; i++){
		cin >> arr[i];
		if(arr[i] == 1){
			l = min(l, i);
			r = max(r, i);
		}
	}

	cout << (l == oo ? 0 : r - l)  << endl;


	return 0;
}
