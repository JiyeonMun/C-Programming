#include <iostream>
using namespace std;

int main()
{
	cout << "202134-364472 ��ǻ�Ͱ��а� ������" << endl;
	int a = 10, b = 100;
	int* ptr = &a;         // ������ ptr�� ������ �Ŀ� a�� �ּҸ� �ִ´�.

	cout << "ptr�� ����Ű�� ���� �� : " << *ptr << endl;
	*ptr = 20;             // ptr�� ����Ű�� ���� 20�� ����
	cout << "���� a�� �� :" << a << endl;
	*ptr = b;
	cout << "���� b�� �� :" << *ptr << endl;
	return 0;
}
	
