#include <iostream>
#include "TCHAR.h"
using namespace std;

class CTest
{
public:
	CTest()
	 :mData1(10), mData2(20)
	 {}
	int mData1, mData2;
	void PrintData(void) {
		cout << mData1 << "\n" << mData2 << endl;
	}
};

int _tmain(int argc, _TCHAR* argv[])
{
	CTest t;
	t.PrintData();
	return 0;
}