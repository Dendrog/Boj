#include<bits/stdc++.h>
using namespace std;
using graph = vector<vector<int>>;
graph g;
int n,m;
int sn,sm;
int visits[1000][1000];
void bfs(){
    queue<pair<int,int>> q;
    q.push({sn,sm});
    visits[sn][sm] = 1;
    for (;q.size();){
        pair<int,int> p = q.front();
        
        q.pop();

        if (p.first - 1 >= 0 && !visits[p.first -1][p.second] && g[p.first -1][p.second] != 0){
            q.push({p.first -1,p.second});
            visits[p.first -1][p.second] = visits[p.first][p.second] + 1;
        }
        if (p.second - 1 >= 0 && !visits[p.first][p.second -1] && g[p.first][p.second -1] != 0){
            q.push({p.first,p.second-1});
            visits[p.first][p.second-1] = visits[p.first][p.second] + 1;
        }
        if (p.first + 1 < n && !visits[p.first +1][p.second] && g[p.first +1][p.second] != 0){
            q.push({p.first +1,p.second});
            visits[p.first +1][p.second] = visits[p.first][p.second] + 1;
        }
        if (p.second + 1 < m && !visits[p.first][p.second+1] && g[p.first][p.second+1] != 0){
            q.push({p.first,p.second+1});
            visits[p.first][p.second+1] = visits[p.first][p.second] + 1;
        }
    }
}

int main(){
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n >> m;
	g.resize(m);
	for (int i=0;i<n;i++){
		for (int k=0;k<m;k++){
			int q;
			cin >> q;
			g[i].push_back(q);
			if (q == 2)
			{
				sn = i;
				sm = k;
			}
		}
	}
	bfs();
	for (int i=0;i<n;i++){
		for (int k=0;k<m;k++){
			if (visits[i][k])
				cout << visits[i][k] -1 << " ";
			else if (g[i][k])
				cout << -1 << " ";
			else
				cout << visits[i][k] << " ";
		}
		cout << "\n";
	}

}