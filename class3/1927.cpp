#include<bits/stdc++.h>
using namespace std;
using graph = vector<vector<int>>;
int main(){
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

    int n;
    cin >> n;

    priority_queue<int,vector<int>,greater<int>> p;
    for(int i=0;i<n;i++){
        int q;
        cin >> q;
        if (q)
            p.push(q);
        else{
            if (p.size()){
                cout << p.top() << "\n";
                p.pop();
            }
            else
                cout << 0 << "\n";
    }
    }
   /*map<int,int> m;
    for(int i=0;i<n;i++){
        int q;
        cin >> q;
        if (q)
            m[q]++;
        else{
            if (m.size()){
                map<int,int>::iterator it = m.begin();
                cout << (*it).first << "\n";
                (*it).second -= 1;
                if (!(*it).second)
                    m.erase(it);
            }
            else
                cout << 0 << "\n";
        }
    }*/
}