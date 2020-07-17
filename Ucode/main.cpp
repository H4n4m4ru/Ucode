#include <stdlib.h>
#include <time.h>
#include <string>
#include <iostream>

using namespace std;

void compare(int _ans, int _input){
	static int min = 1, max = 100;
	if (_input < min || _input > max) printf("嚶嚶嚶\n");
	else if (_input > _ans) max = _input;
	else min = _input;
	printf("請輸入%3d到%3d間的數字 : ", min, max);
}

void main(){
	srand(time(NULL));
	int _answer = rand() % 100 + 1;
	int input = 1;
	do{
		compare(_answer, input);
		cin >> input;
	} while (input != _answer);

	cout << "Congratulation!!\n";

	system("PAUSE");
}