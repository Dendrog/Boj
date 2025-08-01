#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
    stack <int> s;
    vector<int> v;
    list<int> l;
    int n;
    cin >> n;
    for (int i=n;i>0;i--){
        int k;
        cin >> k;
        v.push_back(k);
        s.push(i);
    }
    for (int i=v.size()-1;i>=0;i--){
        switch(v[i]){
            case 1:
                l.push_front(s.top());
                break;
            case 2:
                l.insert(++l.begin(),s.top());
                break;
            case 3:
                l.push_back(s.top());
                break;
        }
        s.pop();
    }
    for (auto i : l){
        cout << i << " ";
    }
}