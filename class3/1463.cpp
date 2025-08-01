#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
    int l[1000001] = {0,};

    int n;
    cin >> n;
    for (int i=1;i<n;i++){
        l[i+1] = l[i+1] != 0 ? min(l[i+1],l[i] + 1) : l[i] + 1;
        if (i*2 <= n)
            l[i*2] = l[i*2] != 0 ? min(l[i*2],l[i] + 1) : l[i] + 1;
        if (i*3 <= n)
            l[i*3] = l[i*3] != 0 ? min(l[i*3],l[i] + 1) : l[i] + 1;
    }
    cout << l[n];
}