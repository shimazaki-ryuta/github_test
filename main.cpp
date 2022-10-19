#include <stdio.h>
#include <iostream>
int main() {
	int end_flg = 0;

	std::cout<< "Hello GitHub World\n";

	std::cout << "New branch changed!\n";

	printf("\nコンソールアプリケーションを終了する場合は数字の1を入力しEnterキーを押してください");
	scanf_s("%d",&end_flg);
	if (end_flg == 1)return 0;
	else return -1;
}