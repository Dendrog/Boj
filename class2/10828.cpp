#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	stack<int> s;
	int n;
	cin >> n;
	for(int i=0;i<n;i++){
		string st;
		cin >> st;
		int l;
		if (st == "push"){
			cin >>l;
			s.push(l);
		}
		if (st == "pop"){
			if (s.size()){
				cout << s.top() << "\n";
				s.pop();
			}
			else
				cout << "-1\n";
		}
		if (st == "size")
			cout << s.size() << "\n";
		if (st == "empty")
			cout << ((s.size() == 0) ? 1 : 0) << "\n";
		if (st == "top"){
			if (s.size()){
				cout << s.top() << "\n";
			}
			else
				cout << "-1\n";
		}
	}
}