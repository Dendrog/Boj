#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

    int n;
    cin >> n;
    int m;
    cin >> m;
    int **a = new int*[n];
    for (int i=0;i<n;i++){
        a[i] = new int[n]();
    }
    for (int i=0;i<m;i++){
        int q,p;
        cin >> q >> p;
        a[q-1][p-1] = 1;
        a[p-1][q-1] = 1;
    }
    stack<int> s;
    int *visit = new int[n]();
    s.push(0);
    for (;s.size();){
        int flag = 1;
        int i = s.top();
        visit[i] = 1;
        for (int k = 0;k < n;k++){
            if (a[i][k] && !visit[k]){
                s.push(k);
                flag = 0;
                break;
            }
        }
        if (flag)
            s.pop();
    }
    int re = 0;
    for (int i=1;i<n;i++){
        if (visit[i])
            re+=1;
    }
    cout << re;
}