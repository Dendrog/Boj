#include<bits/stdc++.h>
using namespace std;
using graph = vector<vector<int>>;
graph g;
vector<int> visits;
void dfs(int a){
    visits[a] = 1;
    for (int i=0;i<g[a].size();i++){
        if (!visits[g[a][i]])
            dfs(g[a][i]);
    }
}

int main(){
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

    int n,m;
    cin >> n >> m;
    g.resize(n);
    visits.assign(n,0);
    for (int i=0;i<m;i++){
        int q,p;
        cin >> q >> p;
        g[q-1].push_back(p-1);
        g[p-1].push_back(q-1);
    }
    int result = 0;
    for (int i=0;i<n;i++){
        if (!visits[i]){
            dfs(i);
            result++;
        }
    }
    cout << result;
}