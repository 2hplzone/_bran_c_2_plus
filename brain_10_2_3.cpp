#include<iostream>
using namespace std;

void main() {
	int i1 = 10;
	int i2 = 20;
	
	//p가 가리키는 변수(i1)는 const int 타입이라 정의
	const int* p1 = &i1;

	//int타입을 가리키는 p는 const속성이라 정의
	int* const p2 = &i1;

	//p가 가리키는 변수(i1)는 const int 타입이고 int타입을 가리키는 p도 const속성을 갖음
	const int* const p3 = &i1;

	cout << "---- 변경전 ----\n";
	cout << "i1: " << i1 <<", &i1: "<< &i1 << ", i2: " << i2 << ", &i2: " << &i2 << "\n";
	cout << "*p1: " << *p1 <<", p1: " << p1 << ", *p2: " << *p2 << ", p2: "<< p2 << ", *p3: " << *p3 << ", p3: " << p3 << "\n";
	
	
	
	p1 = &i2;//p1이 i2를 가리킴
	//*p1 = 31;//p가 가리키는 변수를 const int 로 지정하였으므로 변경 불가

	
	//p2 = &i2;//p2는 const 속성이므로 값 변경 불가
	*p2 = 32;//p2가 가리키는 원소의 값을 30으로 변경

	
	//*p3 = &i2;//p2는 const 속성이므로 값 변경 불가
	//*p3 = 33;//p가 가리키는 변수를 const int 로 지정하였으므로 변경 불가


	cout << "\n---- 변경후 ----\n";
	cout << "i1: " << i1 << ", &i1: " << &i1 << ", i2: " << i2 << ", &i2: " << &i2 << "\n";
	cout << "*p1: " << *p1 << ", p1: " << p1 << ", *p2: " << *p2 << ", p2: " << p2 << ", *p3: " << *p3 << ", p3: " << p3 << "\n";
}