#include <bits/stdc++.h>

using namespace std;

const int mxN = 1e5;
int a[mxN];

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	int sum = 0, cnt = 0;
	for(int i = 0; i < n; i++){
		if(a[i] == -1 && sum > 0){
			sum--;
		} else if(a[i] == -1){
			cnt++;
		}
		if(a[i] > 0){
			sum += a[i];
		}
	}
	cout << cnt << "\n";
	return 0;
}