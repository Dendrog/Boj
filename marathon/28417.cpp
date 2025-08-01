#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n ;
	int max = 0;
	for (int i=0;i<n;i++){
		int re = 0;
		for (int k=0;k<2;k++){
			int q,p;
			cin >> q >> p;
			re += std::max(q,p);
		}
		vector <int> v;
		for (int k=0;k<5;k++){
			int q;
			cin  >> q;
			v.push_back(q);
		}
		sort(v.begin(),v.end(),greater<int>());
		re+=v[0] + v[1];
		max = std::max(re,max);
	}
	cout << max;
}