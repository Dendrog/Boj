#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
    int n;
    cin >> n;
    if (!n){
        cout << 0;
        return 0;
    }
    deque<int> d;
    map<int,int> m;
    for (int i=0;i<n;i++){
        int k;
        cin >> k;
        m.insert({k,0});
        m[k]++;
    }
    for (map<int,int>::iterator i=m.begin();i != m.end();i++){
        for (int q=0;q<i->second;q++)
            d.push_back(i->first);
    }

    double r;
    r = d.size() * 0.15;
    int rr = floor(r + 0.5);
    for (int i=0;i<rr;i++){
        d.pop_front();
        d.pop_back();
    }
    r = 0;
    double qq = 0;
    for (deque<int>::iterator i = d.begin();i!=d.end();i++){
        r += (double)(*i);
        qq++;
    }
    rr = floor(r / qq + 0.5);
    cout << (int)rr;
}