#include <iostream>
#include "TCHAR.h"
using namespace std;

class CMyPoint
{
public:
	CMyPoint(int n) : nData(n) {}
	void PrintData()
	{
		cout << nData << endl;
		cout << this->nData << endl;
	}
};

int _tmain(int argc, _TCHAR* argv[])
{
	CMyPoint a(5);
	a.PrintData();
	return 0;
}