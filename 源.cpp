/*
*��ŵ������
*Ŀ�ģ���n�����Ӵ�x���ƶ���z�ϣ�����Ϊ��
*/


#include<iostream>
#include<stdlib.h>
using namespace std;

/*��n�����Ӵ�x�ϣ�����y,�ƶ���z��*/
void move(int n, char x, char y, char z) {
	if (n == 1)
		cout << "����" << n << "�����Ӵ�" << x << "�ƶ�" << z << "��" << endl;
	else {
		move(n - 1, x, z, y);
		cout << "����" << n << "�����Ӵ�" << x << "�ƶ�" << z << "��" << endl;
		move(n - 1, y, x, z);
	}
}
int main() {
	int n;
	cout << "�������ܵ���������" << endl;
	cin >> n;
	move(n, 'x', 'y', 'z'); 
	system("pause");
	return 0;
}1231