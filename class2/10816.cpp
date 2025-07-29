#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	unordered_map<int,int> m;

	int n,ms;
	cin >>n;
	for (int i=0;i<n;i++){
		int t;
		cin >> t;
		m.insert({t,0});
		m.at(t)++;
	}
	cin >> ms;
	for (int i=0;i<ms;i++){
		int t;
		cin >> t;
		cout << m[t]<<" ";
	}
}