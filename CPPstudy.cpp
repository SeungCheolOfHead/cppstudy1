#include <iostream>
#include <algorithm>
#include<windows.h>
using namespace std;

int SangUn2(int sum)
{
	for (int i = 0; i < 2; i++) {
		cout << "��� ������";
		cout << ".";
		Sleep(500);
		cout << ".";
		Sleep(500);
		cout << ".";
		Sleep(500);
		cout << ".";
		Sleep(500);
		cout << ".";
		Sleep(500);
		cout << ".";
		Sleep(500);
		cout << endl;
	}
	cout << "����� ������ "<<sum<<"�� �Դϴ�" <<endl;
	return 0;
}

int main(int argc, char* argv[])
{
	int SangUn[12] = {};
	int sum = 0;
	for (int i = 0; i < 12; i++)
	{
		cout << "��� "<<i+1<<"�d ���� : ";
		cin >> SangUn[i];
		sum += SangUn[i];
	}
	SangUn2(sum);
	return 0;
}