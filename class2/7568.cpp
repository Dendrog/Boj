#include<iostream>
#include<algorithm>
#include<vector>

#define INPUT_LINE 1
#define INPUT_NUM 1
#define MAX_SIZE 1000

using namespace std;

typedef int input_t;
typedef int output_t;

struct sz{
	int x;
	int y;
	int s;
	int c;
	sz(int x, int y,int c):x(x),y(y),s(0),c(c){}
};

template <typename T>
void output(T result){
	cout << result;
}

template <typename T>
void output_blank(T result){
	cout << result << " ";
}

template <typename T>
void output_ln(T result){
	cout << result << endl;
}
input_t** input(){
	input_t** result = new input_t*[INPUT_LINE];

	for (int i=0;i<INPUT_LINE;i++)
		result[i] = new input_t[INPUT_NUM];
	for (int i=0;i<INPUT_LINE;i++){
		for (int j=0;j<INPUT_NUM;j++){
			cin >> result[i][j];
		}
	}
	return result;
}

input_t** input(int l, int n){
	input_t** result = new input_t*[l];

	for (int i=0;i<l;i++)
		result[i] = new input_t[n];
	for (int i=0;i<l;i++){
		for (int j=0;j<n;j++){
			cin >> result[i][j];
		}
	}
	return result;
}

input_t** input(int n){
	input_t** result = new input_t*[MAX_SIZE];

	for (int i=0;i < MAX_SIZE;i++){
		result[i] = new input_t[n];
		for (int j=0;j<n;j++){
			if(cin.eof())
				return result;
			cin >> result[i][j];
		}
	}
	return result;
}

template <typename T>
T loop_t(T type){
	for(int i=0;i<type.size();i++){
		int r = 1;
		for (int k = 0;k<type.size();k++)
		{
			r += type[i].x < type[k].x && type[i].y < type[k].y ? 1:0 ;
		}
		output_blank(r);
	}
	return type;
}

void delete_arr(input_t** arr){
	for (int i=0;i<INPUT_LINE;i++)
		delete[] arr[i];
	delete[] arr;
}

template <typename T>
T switch_t(T type){
	switch (type){
		case 1:
			printf("");
			break;
		default:
			printf("");
	}
	return type;
}

string getline_t(){
	string result;
	getline(cin,result);
	return result;
}



bool compare_x(sz a, sz b){
	return a.x < b.x;
}

bool compare_y(sz a, sz b){
	return a.y < b.y;
}

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	input_t** in;
	in = input();
	input_t a = in[0][0];
	in = input(2);
	vector <sz> szs;
	for (int i=0;i<a;i++)
		szs.emplace_back(in[i][0],in[i][1],i);
	loop_t(szs);
	
	/*stable_sort(szs.begin(),szs.end(),[](sz a, sz b){return a.x > b.x;});
	stable_sort(szs.begin(),szs.end(),[](sz a, sz b){return a.y > b.y;});
	int k = 1;
	int t=0;
	szs[0].s = k;
	for (int i=1;i<szs.size();i++){
		if (szs[i].x < szs[i-1].x && szs[i].y < szs[i-1].y)
			k = i+1;
		szs[i].s = k;
	}
	sort(szs.begin(),szs.end(),[](sz a, sz b){return a.c < b.c;});
	for(int i=0;i<szs.size();i++)
		output_blank(szs[i].s);
		//[](sz a){output_blank(a.x);output_ln(a.y);}(szs[i]);*/
}