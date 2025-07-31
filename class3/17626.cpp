#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int l[50001] = {0,};
	int n;
	cin >> n;
	for (int i=0;i<50000;i++){
		for (int k=1;(i+k*k) <= n;k++){
			if (l[i+k*k])
				l[i+k*k] = (l[i] + 1) < l[i+k*k] ? (l[i] + 1) : l[i+k*k];
			else
				l[i+k*k] = l[i] + 1;
		}
	}
	cout << l[n];
}