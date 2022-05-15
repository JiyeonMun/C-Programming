#include <iostream>
using namespace std;
int getMax(const int arr[], int len);  //함수의 원형 설정
float getMax(const float arr[], int len);   //함수의 다중 정의(float형 배열)

int getMax(const int arr[], int len)   //함수 머리부
{
	int max = INT_MIN;   // int형의 최솟값을 max로 가정함
	for (int i = 0; i < len; i++)
		if (max < arr[i])
			max = arr[i];
	return max;      // 결과의 반환
}


float getMax(const float arr[], int len)
{
	float max = -numeric_limits<float>::max();
	for (int i = 0; i < len; i++)
		if (max < arr[i])
			max = arr[i];
	return max;      // 결과의 반환
}

int main()
{
	cout << "202134-364472 컴퓨터과학과 문지연" << endl;
	int data[10] = { 10, 23, 5, 9, 22, 48, 12, 10, 55, 31 };

	cout << "데이터 : ";
	for (int i = 0; i < 10; i++)
		cout << data[i] << " ";
	cout << endl << endl;
	cout << "최댓값 = " << getMax(data, 10) << endl;
}
