#include<bits/stdc++.h>
using namespace std;
long long int l[100001];
int main(){
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

    int n,m;
    cin >> n >> m;
    int result = 0;
    for (int i=1;i<=n;i++){
        int s;
        cin >> s;
        result += s;
        l[i] = result;
    }
    for (int i=0;i<m;i++){
        int q,p;
        cin >> q >> p;
        cout << l[p] - l[q-1] << "\n";
    }
}