#include <iostream>
#include "TCHAR.h"
using namespace std;

class CTest
{
	int nData;
public:
	CTest() 
	{
		cout << "CTest::CTest()" << endl;
	}
	~CTest() 
	{
		cout << "~CTest::CTest() " << endl;
	}
};

int _tmain(int argc, _TCHAR* argv[])
{
	cout << "Begin" << endl;
	CTest* p = new CTest[5050];
	cout << "Test" << endl;
	delete[] p;
	cout << "End" << endl;
	return 0;
}