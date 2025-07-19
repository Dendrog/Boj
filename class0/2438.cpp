#include<iostream>

#define INPUT_LINE 1
#define INPUT_NUM 1

using namespace std;

typedef int input_t;
typedef string output_t;

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


int main() {
	input_t** in;
	in = input();

	for(int i=1;i<=in[0][0];i++){
		for (int k=1;k<i;k++){
			output("*");
		}
		output_ln("*");
	}
	
}