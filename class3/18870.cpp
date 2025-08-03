#include<bits/stdc++.h>
using namespace std;
using graph = vector<vector<int>>;
struct ppp{
    int value;
    int out;
    int press;
};

vector<ppp> v;
int counts = -1;
int main(){
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

    //map<int,int> m;
    int n;
    cin >> n;
   
    for(int i=0;i<n;i++){
        int k;
        cin >> k;
        v.push_back({k,i,0});
    }
    sort(v.begin(),v.end(),[](ppp a, ppp b){return a.value < b.value;});
    for (int i=0;i<v.size();i++){
        if (i){
            if (v[i].value != v[i-1].value)
                v[i].press = ++counts;
            else
                v[i].press = counts;
        }
        else
            v[i].press = ++counts;
    }
    sort(v.begin(),v.end(),[](ppp a, ppp b){return a.out < b.out;});
    for (auto k:v)
        cout << k.press << " ";
    /*for(auto& k:m){
        k.second = counts++;
    }
    for(auto k:v){
        cout << m[k] << " ";
    }*/
}