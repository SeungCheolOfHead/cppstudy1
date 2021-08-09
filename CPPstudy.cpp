#include <iostream>
#include <algorithm>
using namespace std;

int TestFunc(int = 10);

int TestFunc(int n)
{
	return n;
}

int main(int argc, char* argv[])
{
	cout << TestFunc(20) << endl;
	return 0;
}