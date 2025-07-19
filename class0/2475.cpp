#include<iostream>
#include <cmath>

#define INPUT_LINE 1
#define INPUT_NUM 5

using namespace std;

typedef int input_t;
typedef int output_t;

template <typename T>
void output(T result){
	cout << fixed;
	cout.precision(15);
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
T loop_t(T type, input_t** in){
	for(int i=0;i<INPUT_NUM;i++){
		type += pow(in[0][i],2);
	}
	return (type % 10);
}

int main() {
	input_t** in;
	in = input();

	output(loop_t(0,in));
	
}