#include<bits/stdc++.h>
using namespace std;
using graph = vector<string>;
int visits[100][100];
int n,m;
graph g;
void bfs(){
    queue<pair<int,int>> q;
    q.push({0,0});
    visits[0][0] = 1;
    for (;q.size();){
        pair<int,int> p = q.front();
        
        q.pop();

        if (p.first - 1 >= 0 && !visits[p.first -1][p.second] && g[p.first -1][p.second] == '1'){
            q.push({p.first -1,p.second});
            visits[p.first -1][p.second] = visits[p.first][p.second] + 1;
        }
        if (p.second - 1 >= 0 && !visits[p.first][p.second -1] && g[p.first][p.second -1] == '1'){
            q.push({p.first,p.second-1});
            visits[p.first][p.second-1] = visits[p.first][p.second] + 1;
        }
        if (p.first + 1 < n && !visits[p.first +1][p.second] && g[p.first +1][p.second] == '1'){
            q.push({p.first +1,p.second});
            visits[p.first +1][p.second] = visits[p.first][p.second] + 1;
        }
        if (p.second + 1 < m && !visits[p.first][p.second+1] && g[p.first][p.second+1] == '1'){
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
    //g.resize(n);
    cin.ignore();
    for (int i=0;i<n;i++){
        string st;
        getline(cin,st);
        g.push_back(st);
    }
    bfs();
    cout << visits[n-1][m-1];
}