#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> v;
vector<vector<int>> visits;
int m,n;
void dfs(int a, int b){
    visits[a][b] = 1;
    if (a-1 >= 0){
        if (!visits[a-1][b] && v[a-1][b])
            dfs(a-1,b);
    }
    if (b-1 >= 0){
        if (!visits[a][b-1]&& v[a][b-1])
            dfs(a,b-1);
    }
    if (a+1 < n){
        if (!visits[a+1][b]&& v[a+1][b])
            dfs(a+1,b);
    }
    if (b+1 < m){
        if (!visits[a][b+1]&& v[a][b+1])
            dfs(a,b+1);
    }
}

int main(){
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

    int t;
    cin >> t;
    for (int i=0;i<t;i++){
        int num;
        cin >> m >> n >> num;
        for (int k=0;k<n;k++){
            vector<int> vec(m);
            vector<int> vec2(m);
            v.push_back(vec);
            visits.push_back(vec2);
        }
        for (int k=0;k<num;k++){
            int q,p;
            cin >> q>>p;
            v[p][q] = 1;
        }
        int result = 0;
        for (int k=0;k<n;k++){
            for(int w=0;w<m;w++){
                if (!visits[k][w] && v[k][w]){
                    result++;
                    dfs(k,w);
                }
            }
        }
        cout << result << "\n";
        v.clear();
        visits.clear();
    }
}