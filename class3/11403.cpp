#include<bits/stdc++.h>
using namespace std;
using graph = vector<vector<int>>;
graph g;
int main(){
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

    int n,m;
    cin >> n;
    g.resize(n);
    for (int i=0;i<n;i++){
        g[i].assign(n,10000);
        //g[i][i] = 0;
    }
    for (int i=0;i<n;i++){
		for (int k=0;k<n;k++){
			int q;
			cin >> q;
			if (q){
				g[i][k] = 1;
				//g[k][i] = 1;
			}
		}
    }
	/*for (int i=0;i<n;i++){
        int tmp =0;
        for (int k=0;k<n;k++)
        	cout << g[i][k] << " ";
		cout << "\n";
    }*/

    for (int i=0;i<n;i++)
        for (int k=0;k<n;k++)
            if (k!=i)
                for (int q=0;q<n;q++)
                    if (q != i)
                        g[k][q] = min(g[k][q],g[k][i] + g[i][q]);
    //vector<pair<int,int>> vp;
    for (int i=0;i<n;i++){
        int tmp =0;
        for (int k=0;k<n;k++)
        	cout << (g[i][k] < 10000) << " ";
		cout << "\n";
    }

}