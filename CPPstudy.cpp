#include <iostream>
#include <algorithm>
#include<windows.h>
using namespace std;

int SangUn2(int sum)
{
	for (int i = 0; i < 2; i++) {
		cout << "상언 조합중";
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
	cout << "상언의 연봉은 "<<sum<<"원 입니다" <<endl;
	return 0;
}

int main(int argc, char* argv[])
{
	int SangUn[12] = {};
	int sum = 0;
	for (int i = 0; i < 12; i++)
	{
		cout << "상언 "<<i+1<<"웓 월급 : ";
		cin >> SangUn[i];
		sum += SangUn[i];
	}
	SangUn2(sum);
	return 0;
}