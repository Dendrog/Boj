#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	queue<string> q;
	stack<int> s;
	int num = 1;

	int n;
	cin >> n;

	for (int i=1;i<=n;i++){
		int in;
		cin >> in;
		for (;;){
			if (!s.size()){
				s.push(num++);
				q.push("+\n");
			}
			if (in == s.top()){
				s.pop();
				q.push("-\n");
				break;
			}
			else if (in >= num){
				s.push(num++);
				q.push("+\n");
			}
			else{
				cout << "NO";
				return 0;
			}
		}
	}
	for (;q.size();){
		cout << q.front();
		q.pop();
	}
}