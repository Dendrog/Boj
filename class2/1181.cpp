#include<iostream>
#include<algorithm>

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

bool compare(string a, string b){
	return a.length() < b.length();
}

int main() {
	input_t** in;
	in = input(1,1);
	input_t a = in[0][0];
	in = input(1,stoi(a));
	sort(in[0],in[0]+stoi(a));
	stable_sort(in[0],in[0]+stoi(a),compare);
	output_ln(in[0][0]);
	for (int i =1;i<stoi(a);i++)
		if (in[0][i-1] != in[0][i])
			output_ln(in[0][i]);
}