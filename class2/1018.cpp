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
	cout << result << "\n";
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

int w(string *chess, int x, int y){
	int count = 0;
	char t = 'B';
	for (int i = x;i<x+8;i++){
		t = (t == 'W') ? 'B' : 'W';
		for (int k = y;k<y+8;k++){
			if (chess[i][k] != t)
				count++;
			t = (t == 'W') ? 'B' : 'W';
		}
	}
	return count;
}

int b(string *chess, int x, int y){
	int count = 0;
	char t = 'W';
	for (int i = x;i<x+8;i++){
		t = (t == 'W') ? 'B' : 'W';
		for (int k = y;k<y+8;k++){
			if (chess[i][k] != t)
				count++;
			t = (t == 'W') ? 'B' : 'W';
		}
	}
	return count;
}

template <typename T>
T loop_t(T* type, int a){
	int mins = 9999999;
	int ww;
	int bb;
	for(int i=0;i<=a-8;i++){
		for (int k=0;k<=type[i].length() - 8;k++){
			ww = w(type,i,k);
			bb = b(type,i,k);
			mins = min({ww,bb,mins});
		}
	}
	output(mins);
	return "";
}

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	input_t** in;
	in = input(1,2);
	input_t a = in[0][0];
	in = input(1,stoi(a));
	loop_t(*in,stoi(a));
}