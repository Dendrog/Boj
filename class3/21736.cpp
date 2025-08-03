#include<bits/stdc++.h>
using namespace std;
using graph = vector<vector<char>>;
int n,m;
graph g;
vector<vector<int>> visits;
int result;
void dfs(int a, int b){
    visits[a][b] = 1;
    if (g[a][b] == 'P')
        result++;
    if (a-1 >= 0 && !visits[a-1][b])
        dfs(a-1, b);
    if (a+1 < n && !visits[a+1][b])
        dfs(a+1, b);
    if (b-1 >= 0 && !visits[a][b-1])
        dfs(a, b-1);
    if (b+1 < m && !visits[a][b+1])
        dfs(a, b+1);
}

int main(){
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

    cin >> n >> m;
    g.resize(n);
    visits.resize(n);
    int a,b;
    for (int i=0;i<n;i++){
        visits[i].resize(m);
        for (int k=0;k<m;k++){
            char q;
            cin >> q;
            g[i].push_back(q);
            if (q == 'I')
            {
                a = i;
                b = k;
            }
            if (q == 'X')
                visits[i][k] = 1;
        }
    }
    dfs(a,b);
    if (result)
        cout << result;
    else
        cout << "TT";
}