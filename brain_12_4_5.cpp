#include <iostream>
using namespace std;

void main() {
	int iArr[10];
	//포인터가 배열의 첫번째 원소를 가리킴
	int* p = &iArr[0];

	//*(p + i): p를 기준으로 i만큼 위에있는 원소를 가리킴
	//*(p + i)원소에 i값 저장
	for (int i = 0; i < 10; i++) {
		*(p + i) = i;
	}

	//iArr 출력
	for (int i = 0; i < 10; i++) {
		cout << "iArr[" << i << "]: " << iArr[i] << "\n";
	}

	cout << "\n\n";

	//p를 기준으로 i만큼 위에 있는 원소 출력
	for (int i = 0; i < 10; i++) {
		cout << "*(p + " << i << "): " << *(p + i) << "\n";
	}

	/*결과
	iArr[0]: 0
	iArr[1] : 1
	iArr[2] : 2
	iArr[3] : 3
	iArr[4] : 4
	iArr[5] : 5
	iArr[6] : 6
	iArr[7] : 7
	iArr[8] : 8
	iArr[9] : 9


	* (p + 0) : 0
	* (p + 1) : 1
	* (p + 2) : 2
	* (p + 3) : 3
	* (p + 4) : 4
	* (p + 5) : 5
	* (p + 6) : 6
	* (p + 7) : 7
	* (p + 8) : 8
	* (p + 9) : 9
	*/
}