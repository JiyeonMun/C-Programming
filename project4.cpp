#include <iostream>
using namespace std;

int main()
{
	cout << "202134-364472 ��ǻ�Ͱ��а� ������" << endl;
	char* sPtr;
	int maxSLen;
	cout << "�ܾ��� �ִ� ���̸� �Է��Ͻÿ� : ";
	cin >> maxSLen;
	sPtr = new char[maxSLen + 1]; // maxSLen���� ���ڸ� ������ �޸� �Ҵ�
	cout << "�ܾ �Է��Ͻÿ� : ";
	cin >> sPtr;
	for (char* p = sPtr; p <= sPtr+maxSLen- 1; p++)   //p�� �̿��Ͽ� ��� ���� ó��
		*p = *p - 'a' + 'A'; //�ҹ��ڸ� �빮�ڷ� ��ȯ
	cout << sPtr << endl;
	delete [] sPtr;	      // (��)���� �Ҵ��� �޸� ��ȯ
}