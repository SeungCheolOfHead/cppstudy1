#include <iostream>
#include <string>
#include <cstdio>

int main(int argc, char* argv[])
{
	int nAge;
	std::cout << "나이" << std::endl;
	std::cin >> nAge;

	char A[32];
	std::cout << "직업" << std::endl;
	std::cin >> A;

	std::string strName;
	std::cout << "이름" << std::endl;
	std::cin >> strName;

	std::cout << "당신의 이름은 " << strName << "이고, " << "나이는 " << nAge << "이며, " << "직업은 " << A << "입니다."<<std::endl;
	return 0;
}