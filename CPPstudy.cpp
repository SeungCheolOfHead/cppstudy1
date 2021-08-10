#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, char* argv[])
{
	int x, y, z;
	x = (1 == 1);
	y = (2 == 3);
	z = (1 == 1) + (1 != 1);
	cout << x << y << z << endl;
	return 0;
}