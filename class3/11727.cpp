#include<bits/stdc++.h>
using namespace std;
long long int l[1001];
int main(){
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

    int n;
    cin >> n;
    l[1] = 1;
    l[2] = 3;
    for (int i=3;i<=n;i++){
            l[i] = (l[i-1] + l[i-2]*2) % 10007;

    }
    cout << l[n] % 10007;
}