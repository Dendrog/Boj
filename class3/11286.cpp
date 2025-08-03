#include<bits/stdc++.h>
using namespace std;
using graph = vector<vector<int>>;
int main(){
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

    int n;
    cin >> n;

    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> p;
    for(int i=0;i<n;i++){
        int q;
        cin >> q;
        if (q)
            p.push({abs(q),q});
        else{
            if (!p.empty()){
                cout << p.top().second << "\n";
                p.pop();
            }
            else
                cout << 0 << "\n";
        }
    }
}