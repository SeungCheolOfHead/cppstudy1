#include <iostream>
#include <string>
#include <cstdio>
using namespace std;

int TestFunc(int param)
{
	int Result = param * 2;
	return Result;
}

int main(int argc, char* argv[])
{
	int input = 0;
	cout << "input number : ";
	cin >> input;
	int&& rdata = input + 5;
	cout << rdata << endl;
	int&& result = TestFunc(10);
	result += 10;
	cout << result << endl;
	return 0;
}