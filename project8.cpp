#include <iostream>
using namespace std;

struct Rectangle {
	float x1, y1;    // 좌측 하단의 꼭짓점 좌표
	float x2, y2;    // 우측 하단의 꼭짓점 좌표
};

//x1,y1, x2,y2의 데이터 입력
void inputData(Rectangle& r)       // 함수 머리부
{
	cout << "x1의 좌표 : ";
	cin >> r.x1;
	cout << "y1의 좌표 : ";
	cin >> r.y1;
	cout << "x2의 좌표 : ";
	cin >> r.x2;
	cout << "y2의 좌표 : ";
	cin >> r.y2; 
}

// 데이터 출력
void prData(const Rectangle& r)     // 함수 머리부
{
	cout << "(x1, y1) = (" << r.x1;
	cout << ", " << r.y1 << ")" << endl;
	cout << "(x2, y2) = (" << r.x2;
	cout << ", " << r.y2 << ")" << endl;

}


//직사각형의 면적 계산
double area(const Rectangle& r)        //함수 머리부 
{
	return (r.x2-r.x1) * (r.y2-r.y1);
}

const float PI = 3.14159265f;
struct Circle {
	float radius, cx, cy;
};

//원의 데이터 입력
void inputData(Circle& c)       // 함수 머리부
{
	cout << "원의 반지름 : ";
	cin >> c.radius;
	cout << "중심좌표(x) : ";
	cin >> c.cx;
	cout << "중심좌표(y) : ";
	cin >> c.cy;
}

//원의 데이터 출력
void prData(const Circle& c)                         // 함수 머리부
{
	cout << "반지름 = " << c.radius << endl;
	cout << "중심좌표 = (" << c.cx;
	cout << ", " << c.cy << ")" << endl;
}


//원의 면적 계산
double area(const Circle& c)        //함수 머리부 
{
	return PI * c.radius * c.radius;
}


int main()
{
	cout << "202134-364472 컴퓨터과학과 문지연" << endl;
	Rectangle rectangle = { 1,2,3,4 };
	inputData(rectangle);
	cout << "입력된 직사각형의 정보" << endl;
	prData(rectangle);
	cout << "직사각형의 면적 = " << area(rectangle) << endl;
}


