#include <iostream>
#include <algorithm>
using namespace std;

template<typename T>
T Add(T a, T b)
{
	return a + b;
}
int main(int argc, char* argv[])
{
	cout << Add<int>(3, 4) << endl;
	cout << Add(3.3, 4.4) << endl;
	return 0;
}