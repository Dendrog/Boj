#include<bits/stdc++.h>
using namespace std;
using graph = vector<vector<int>>;
graph g;
int n,m;
int tmp;
vector<int> times(100001);
void bfs(int start){
	queue<int> q;
	q.push(start);
	times[start] = 1;
	for(;q.size();){
		int p = q.front();
		if (p == m)
			return ;
		//cout << p.first << "\n";
		q.pop();
		/*if (times[p.first])
			continue;*/
		//times[p] = tmp;
		for (int i=0;i<g[p].size();i++){
			if (!times[g[p][i]]){
				q.push(g[p][i]);
				times[g[p][i]] = times[p]+1;
				if (g[p][i] == m)
					return ;
			}
		}
	}
}

int main(){
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n >> m;
	g.resize(100001);
	for (int i=0;i<100001;i++){
		if (i -1 >= 0)
			g[i].push_back(i-1);
		if (i+1 < 100001)
			g[i].push_back(i+1);
		if (i*2 < 100001 && i)
			g[i].push_back(i*2);
	}
	bfs(n);
	cout << times[m] -1;
}