#include <iostream>
using namespace std;
int getMax(const int arr[], int len);  //�Լ��� ���� ����
float getMax(const float arr[], int len);   //�Լ��� ���� ����(float�� �迭)

int getMax(const int arr[], int len)   //�Լ� �Ӹ���
{
	int max = INT_MIN;   // int���� �ּڰ��� max�� ������
	for (int i = 0; i < len; i++)
		if (max < arr[i])
			max = arr[i];
	return max;      // ����� ��ȯ
}


float getMax(const float arr[], int len)
{
	float max = -numeric_limits<float>::max();
	for (int i = 0; i < len; i++)
		if (max < arr[i])
			max = arr[i];
	return max;      // ����� ��ȯ
}

int main()
{
	cout << "202134-364472 ��ǻ�Ͱ��а� ������" << endl;
	int data[10] = { 10, 23, 5, 9, 22, 48, 12, 10, 55, 31 };

	cout << "������ : ";
	for (int i = 0; i < 10; i++)
		cout << data[i] << " ";
	cout << endl << endl;
	cout << "�ִ� = " << getMax(data, 10) << endl;
}
