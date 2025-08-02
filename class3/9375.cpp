#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

    int t,n;
    cin >> t;
    for (int i=0;i<t;i++){
        cin >> n;
        map<string,int> m;
        for (int k=0;k<n;k++){
            string s,r;
            cin >> s >> r;
            m[r]++;
        }
        int re = 1;
        for (auto i : m){
            re *= i.second+1;
        }
        cout << re -1 << "\n";
    }
}