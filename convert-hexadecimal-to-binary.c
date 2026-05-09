#include<iostream>
using namespace std;
//16進数で入力された数値を2進数に表示する関数
void Print_binary(int num) {
	for (int i = 15; i >= 0; i--) {
		if (num & (1 << i)) {
			cout << '1';
		}
		else {
			cout << '0';
		}
	}
	cout << endl;
}

void main() {
	//ローカル変数
	int num;
	//表示
	cout << "数値を入力してください。";
	//数値を入力
	cin >> num;
	//表示
	cout << "16進数の2進数:";
	//2進数を出力
	Print_binary(num);
}
