#include <iostream>
#include <string>
#include <cstdio>

int main(int argc, char* argv[])
{
	int nAge;
	std::cout << "����" << std::endl;
	std::cin >> nAge;

	char A[32];
	std::cout << "����" << std::endl;
	std::cin >> A;

	std::string strName;
	std::cout << "�̸�" << std::endl;
	std::cin >> strName;

	std::cout << "����� �̸��� " << strName << "�̰�, " << "���̴� " << nAge << "�̸�, " << "������ " << A << "�Դϴ�."<<std::endl;
	return 0;
}