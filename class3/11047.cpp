#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	vector<int> v;
	//map<int, int> m;
	int n,k;
	cin >> n >> k;
	for (int i=0;i<n;i++){
		int q;
		cin >> q;
		v.push_back(q);
	}
	int r = 0;
	sort(v.begin(),v.end(), greater<int>());
	for (int q=0;q < v.size();q++){
		if (k >= v[q]){
			r+= k / v[q];
			k = k % v[q];
		}
	}
	cout << r;
}