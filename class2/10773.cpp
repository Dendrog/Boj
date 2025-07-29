#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	int gg;
	stack<int> s;
	for (int i=0;i<n;i++){
		cin >> gg;
		if (gg)
			s.push(gg);
		else
			s.pop();
	}
	n=0;
	for (int i=0;s.size();i++){
		n+=s.top();
		s.pop();
	}
	cout << n;
}