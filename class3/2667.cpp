#include<bits/stdc++.h>
using namespace std;
using graph = vector<string>;
int visits[100][100];
int n,m;
vector<int> re;
graph g;
void bfs(){
    queue<pair<int,int>> q;
    for (int i = 0;i<n;i++){
        for (int k=0;k<n;k++){
    int count = 0;
    if (g[i][k]=='1' && !visits[i][k]){
        q.push({i,k});
        visits[i][k] = 1;
    }
    for (;q.size();){
        pair<int,int> p = q.front();
        
        q.pop();
        count++;
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
        if (p.second + 1 < n && !visits[p.first][p.second+1] && g[p.first][p.second+1] == '1'){
            q.push({p.first,p.second+1});
            visits[p.first][p.second+1] = visits[p.first][p.second] + 1;
        }
    }
    if (count)
        re.push_back(count);

    }
    }
}

int main(){
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

    cin >> n;
    //g.resize(n);
    cin.ignore();
    for (int i=0;i<n;i++){
        string st;
        getline(cin,st);
        g.push_back(st);
    }
    bfs();
    cout << re.size() << '\n';
    sort(re.begin(),re.end());
    for (int i=0;i<re.size();i++)
        cout << re[i] << "\n";
}