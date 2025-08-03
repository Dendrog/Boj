#include<bits/stdc++.h>
using namespace std;
using graph = vector<vector<int>>;
graph g;
int main(){
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

    int n,m;
    cin >> n >> m;
    g.resize(n+1);
    for (int i=1;i<=n;i++){
        g[i].assign(n+1,10000);
        g[i][i] = 0;
    }
    for (int i=0;i<m;i++){
        int q,p;
        cin >> q >> p;
        g[q][p] = 1;
        g[p][q] = 1;
    }

    for (int i=1;i<=n;i++)
        for (int k=1;k<=n;k++)
            if (k!=i)
                for (int q=1;q<=n;q++)
                    if (q != i)
                        g[k][q] = min(g[k][q],g[k][i] + g[i][q]);
    vector<pair<int,int>> vp;
    for (int i=1;i<=n;i++){
        int tmp =0;
        for (int k=1;k<=n;k++)
            tmp += g[i][k];
        vp.push_back({tmp,i});
    }
    sort(vp.begin(),vp.end());
    cout << vp[0].second;

}