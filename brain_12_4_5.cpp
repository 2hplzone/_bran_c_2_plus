#include <iostream>
using namespace std;

void main() {
	int iArr[10];
	//�����Ͱ� �迭�� ù��° ���Ҹ� ����Ŵ
	int* p = &iArr[0];

	//*(p + i): p�� �������� i��ŭ �����ִ� ���Ҹ� ����Ŵ
	//*(p + i)���ҿ� i�� ����
	for (int i = 0; i < 10; i++) {
		*(p + i) = i;
	}

	//iArr ���
	for (int i = 0; i < 10; i++) {
		cout << "iArr[" << i << "]: " << iArr[i] << "\n";
	}

	cout << "\n\n";

	//p�� �������� i��ŭ ���� �ִ� ���� ���
	for (int i = 0; i < 10; i++) {
		cout << "*(p + " << i << "): " << *(p + i) << "\n";
	}

	/*���
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