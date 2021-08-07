#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, char* argv[])
{
	int alist[5] = { 5,3,2,1,4 };
	for (auto &n : alist)
		cout << n <<' ';
	cout << endl;
	sort(alist, alist + 5);
	for (auto &n : alist)
		cout << n << ' ';
	cout << endl;
	return 0;
}