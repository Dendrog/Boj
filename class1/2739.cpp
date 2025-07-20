#include<iostream>

#define INPUT_LINE 1
#define INPUT_NUM 1

using namespace std;

typedef int input_t;
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

template <typename T>
void loop_t(T type){
	for(int i=1;i<=9;i++){
		output_blank(type);
		output_blank("*");
		output_blank(i);
		output_blank("=");
		output_ln(type*i);
	}
	//return type;
}


int main() {
	input_t** in;
	in = input();
	loop_t(in[0][0]);
}