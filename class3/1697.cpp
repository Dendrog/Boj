#include<bits/stdc++.h>
using namespace std;
using graph = vector<vector<int>>;
graph g;
int n,m;
long long counts;
vector<int> times(100001);
void bfs(int start){
	queue<pair<int,int>> q;
	q.push({start,1});
	for(;q.size();){
		pair<int,int> p = q.front();
		//cout << p.first << "\n";
		q.pop();
		times[start] = p.second;
		for (int i=0;i<g[p.first].size();i++){
			if (!times[g[p.first][i]])
				q.push({g[p.first][i],p.second});
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
	cout << times[m];
}