#include <iostream>
using namespace std;

int main()
{
	cout << "202134-364472 ��ǻ�Ͱ��а� ������" << endl;
	int a = 10, b = 20;
	int& aRef = a;
	cout << "a�� �� : " << a << endl;
	cout << "aRef�� �����ϴ� �� : " << aRef << endl << endl;
	aRef = 100;
	cout << "a�� �� : " << a << endl;
	aRef = b;
	cout << "a�� �� : " << a << endl;
	return 0;
}