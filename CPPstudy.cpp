#include <iostream>
#include <string>
#include <cstdio>
using namespace std;

void TestFunc(int& rparam)
{
	rparam = 100;
}

int main(int argc, char* argv[])
{
	int nData = 0;
	TestFunc(nData);
	cout << nData << endl;
	return 0;
}