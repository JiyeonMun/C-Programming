#include <iostream>
using namespace std;

int main()
{
	cout << "202134-364472 컴퓨터과학과 문지연" << endl;
	char* sPtr;
	int maxSLen;
	cout << "단어의 최대 길이를 입력하시오 : ";
	cin >> maxSLen;
	sPtr = new char[maxSLen + 1]; // maxSLen개의 문자를 저장할 메모리 할당
	cout << "단어를 입력하시오 : ";
	cin >> sPtr;
	for (char* p = sPtr; p <= sPtr+maxSLen- 1; p++)   //p를 이용하여 모든 문자 처리
		*p = *p - 'a' + 'A'; //소문자를 대문자로 변환
	cout << sPtr << endl;
	delete [] sPtr;	      // (ㄱ)에서 할당한 메모리 반환
}