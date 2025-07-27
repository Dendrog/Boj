#include<iostream>
#include<algorithm>
#include <vector>

#define INPUT_LINE 1
#define INPUT_NUM 1
#define MAX_SIZE 1000

using namespace std;

typedef string input_t;
typedef int output_t;

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
	for(int i=0;i<INPUT_NUM;i++){
		type++;
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

struct jj{
	int age;
	string name;

	jj(int a, string b):age(a),name(b){}
};

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	input_t** in;
	in = input();
	input_t a = in[0][0];
	in = input(stoi(a),2);
	vector <jj> js;
	for (int i=0;i<stoi(a);i++)
		js.emplace_back(stoi(in[i][0]),in[i][1]);
	stable_sort(js.begin(),js.end(),[](jj a, jj b){return a.age < b.age;});
	for (int i=0;i<stoi(a);i++)
		[](jj a){output_blank(a.age);output_ln(a.name);}(js[i]);
}