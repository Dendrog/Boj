#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int s;
	cin >> s;
	for (int i=0;i<s;i++){
		map<int,int,greater<int>> p;
		queue<pair<int,int>> q;
		int n,m;
		cin >> n >> m;
		for (int k=0;k<n;k++){
			int tmp;
			cin >> tmp;
			//p.insert({tmp,0});
			p[tmp]++;
			if (k == m)
				q.push(make_pair(tmp,1));
			else
				q.push(make_pair(tmp,0));
		}
		int o = 0;
		for (int k=1;;k++){
			map<int,int,greater<int>>::iterator iter = p.begin();
			if (q.front().first == iter->first){
				o++;
				iter->second--;
				if (iter->second == 0)
					p.erase(iter);
				if (q.front().second){
					cout << o << "\n";
					break;
				}
				q.pop();
			}
			else{
				q.push(q.front());
				q.pop();
			}
		}
	}
}