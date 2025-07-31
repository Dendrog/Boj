#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n,m;
	cin >> n >> m;
	unordered_map<string,string> s;
	for (int i=1;i<=n;i++){
		string st;
		cin >> st;
		s.insert({st,to_string(i)});
		s.insert({to_string(i),st});
	}
	for (int i=0;i<m;i++){
		string st;
		cin >> st;
		cout << s[st] << "\n";
	}
}