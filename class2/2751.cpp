#include<iostream>
#include<algorithm>
#include<ctime>
#define INPUT_LINE 1
#define INPUT_NUM 1
#define MAX_SIZE 1000

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
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
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

int main() {
	//time_t start, finish;
	//start = time(NULL);
	int *ne = new int[1000001] {0,};
	int *po = new int[1000001] {0,};
	int n;
	int tmp;
	scanf("%d",&n);
	for (int i = 0;i<n;i++){
		scanf("%d",&tmp);
		if (tmp < 0)
			ne[-1 * tmp] = 1;
		else
			po[tmp] = 1;
	}
	for (int i = -1000000;i <= 1000000;i++){
		if (i < 0 && ne[i*-1])
			output_ln(i);
		else if (i>=0 && po[i])
			output_ln(i);
	}
	//finish = time(NULL);

}