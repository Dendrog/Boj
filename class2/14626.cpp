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
	int f = 1;
	int re = 0;
	int ind = 0;
	for(int i=0;i<type.length()-1;i++){
		f = i % 2 ? 3 : 1;
		if (type[i] != '*'){
			re += (type[i] - '0') * f;
		}
		else
			ind = i;
	}
	int t = 10;
	//if (type[type.length()-1] == '0')
	//	t = 0;
	for (int i=0;i<10;i++){
		if ((10 - (re + (i * (ind % 2 ? 3 : 1))) % 10)%10 == type[type.length()-1] - '0')
			output(i);
	}
	//output(((t - (type[type.length()-1] - '0')) - (re % 10)) / (ind % 2 ? 1 : 3));
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

int main() {
	input_t** in;
	in = input();
	input_t a = in[0][0];
	loop_t(a);
}