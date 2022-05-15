#include <iostream>
using namespace std;

struct Rectangle {
	float x1, y1;    // ���� �ϴ��� ������ ��ǥ
	float x2, y2;    // ���� �ϴ��� ������ ��ǥ
};

//x1,y1, x2,y2�� ������ �Է�
void inputData(Rectangle& r)       // �Լ� �Ӹ���
{
	cout << "x1�� ��ǥ : ";
	cin >> r.x1;
	cout << "y1�� ��ǥ : ";
	cin >> r.y1;
	cout << "x2�� ��ǥ : ";
	cin >> r.x2;
	cout << "y2�� ��ǥ : ";
	cin >> r.y2; 
}

// ������ ���
void prData(const Rectangle& r)     // �Լ� �Ӹ���
{
	cout << "(x1, y1) = (" << r.x1;
	cout << ", " << r.y1 << ")" << endl;
	cout << "(x2, y2) = (" << r.x2;
	cout << ", " << r.y2 << ")" << endl;

}


//���簢���� ���� ���
double area(const Rectangle& r)        //�Լ� �Ӹ��� 
{
	return (r.x2-r.x1) * (r.y2-r.y1);
}

const float PI = 3.14159265f;
struct Circle {
	float radius, cx, cy;
};

//���� ������ �Է�
void inputData(Circle& c)       // �Լ� �Ӹ���
{
	cout << "���� ������ : ";
	cin >> c.radius;
	cout << "�߽���ǥ(x) : ";
	cin >> c.cx;
	cout << "�߽���ǥ(y) : ";
	cin >> c.cy;
}

//���� ������ ���
void prData(const Circle& c)                         // �Լ� �Ӹ���
{
	cout << "������ = " << c.radius << endl;
	cout << "�߽���ǥ = (" << c.cx;
	cout << ", " << c.cy << ")" << endl;
}


//���� ���� ���
double area(const Circle& c)        //�Լ� �Ӹ��� 
{
	return PI * c.radius * c.radius;
}


int main()
{
	cout << "202134-364472 ��ǻ�Ͱ��а� ������" << endl;
	Rectangle rectangle = { 1,2,3,4 };
	inputData(rectangle);
	cout << "�Էµ� ���簢���� ����" << endl;
	prData(rectangle);
	cout << "���簢���� ���� = " << area(rectangle) << endl;
}


