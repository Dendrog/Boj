#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	set<int> s;
	int n;
	cin >> n;

	for(int i=0;i<n;i++){
		string st;
		int num;
		cin >> st;
		if (st == "add") {
			cin >> num;
			s.insert(num);
		}
		if (st == "remove") {
			cin >> num;
			s.erase(num);
		}
		if (st == "check") {
			cin >> num;
			if (s.find(num) != s.end())
				cout << "1\n";
			else
				cout << "0\n";
		}
		if (st == "toggle") {
			cin >> num;
			if (s.find(num) != s.end())
				s.erase(num);
			else
				s.insert(num);
		}
		if (st == "all") {
			for (int k=1;k<=20;k++)
				s.insert(k);
		}
		if (st == "empty") {
			s.clear();
		}
	}
}