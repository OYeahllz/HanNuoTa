/*
*汉诺塔问题
*目的：将n个盘子从x上移动到z上，底下为大
*/


#include<iostream>
#include<stdlib.h>
using namespace std;

/*把n个盘子从x上，借助y,移动到z上*/
void move(int n, char x, char y, char z) {
	if (n == 1)
		cout << "将第" << n << "个盘子从" << x << "移动" << z << "上" << endl;
	else {
		move(n - 1, x, z, y);
		cout << "将第" << n << "个盘子从" << x << "移动" << z << "上" << endl;
		move(n - 1, y, x, z);
	}
}
int main() {
	int n;
	cout << "请输入总的盘子数：" << endl;
	cin >> n;
	move(n, 'x', 'y', 'z'); 
	system("pause");
	return 0;
}1231