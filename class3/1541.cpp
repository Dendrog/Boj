#include<bits/stdc++.h>
using namespace std;
using graph = vector<vector<int>>;
int main(){
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

    string st;
    cin >> st;
    long long int result = 0;
    int tmp = 0;
    int flag = 1;
    for (int i=0;i<st.length();i++){
        if (isdigit(st[i]))
            tmp = tmp * 10 + st[i]-'0';
        else{
            if (flag)
                result += tmp;
            else
                result -=tmp;
            tmp = 0;
            if (st[i] == '-')
                flag = 0;
        }
        
    }
    if (flag)
        result += tmp;
    else
        result -=tmp;
     cout << result << "\n";
   
}