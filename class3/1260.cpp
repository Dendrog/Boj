#include<bits/stdc++.h>
using namespace std;
using graph = vector<vector<int>>;
graph g;
vector<int> visit_dfs;
vector<int> visit_bfs;
int v;

void dfs(){
    stack<int> s;
    s.push(v);
    cout << v << " ";
    for(;s.size();){
        int t = s.top();
        visit_dfs[t] = 1;
        
        int flag =1;
        for (int i = 0;i<g[t].size();i++){
            if (!visit_dfs[g[t][i]]){
                s.push(g[t][i]);
                cout << g[t][i] << " ";
                flag  =0;
                break;
            }
        }
        if (flag)
            s.pop();
    }
    cout << "\n";
}

void bfs(){
    queue<int> q;
    q.push(v);
    visit_bfs[v] = 1;
    cout << v << " ";
    for(;q.size();){
        int t = q.front();
        q.pop();
        for (int i = 0;i<g[t].size();i++){
            if (!visit_bfs[g[t][i]]){
                q.push(g[t][i]);
                cout << g[t][i] << " ";
                visit_bfs[g[t][i]] = 1;
            }
        }
    }
    cout << "\n";

}

int main(){
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

    int n,m;
    cin >> n >> m >> v;
    g.resize(n+1);
    for (int i=0;i<m;i++){
        int q,p;
        cin >> q>> p;
        g[q].push_back(p);
        g[p].push_back(q);
    }
    for (int i=0;i<=n;i++)
        sort(g[i].begin(),g[i].end());
    visit_bfs.assign(n+1,0);
    visit_dfs.assign(n+1,0);
    dfs();
    bfs();
}