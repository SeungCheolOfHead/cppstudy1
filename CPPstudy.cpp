#include <iostream>
#include "TCHAR.h"
using namespace std;

int nData(20);

namespace TEST
{
	void TestFunc(void) {
		cout << nData << endl;
	}
	int nData = 100;
}

int _tmain(int argc, _TCHAR* argv[])
{
	TEST::TestFunc();
	return 0;
}