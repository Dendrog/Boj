#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	unordered_set<string> s;
	vector<string> v;
	int n,m;
	cin >> n >> m;
	for (int i=0;i<n;i++){
		string st;
		cin >> st;
		s.insert(st);
	}
	for (int i=0;i<m;i++){
		string st;
		cin >> st;
		if (s.count(st)){
			v.push_back(st);
		}
	}
	sort(v.begin(),v.end());
	cout << v.size() << "\n";
	for (int i=0;i<v.size();i++)
		cout << v[i] << "\n";
}