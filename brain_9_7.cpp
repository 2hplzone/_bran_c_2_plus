#include <iostream>
using namespace std;

void main() {
	char cArray1[] = "ABCDE";
	char cArray2[] = { 'A','B','C','D','E',0 };

	//배열의 크기
	int cArray1Size = sizeof(cArray1);
	int cArray2Size = sizeof(cArray2);

	//원소갯수 = 배열크기 / 배열내 0번째 원소 크기
	int cArray1Count = cArray1Size / sizeof(cArray1[0]);
	int cArray2Count = cArray2Size / sizeof(cArray2[0]);

	cout << "---- 배열 크기 ----\n";
	cout << "sizeof(cArray1): " << cArray1Size << "\n";
	cout << "size(cArray2): " << cArray2Size << "\n";

	cout << "---- 원소 갯수 ----\n";
	cout << "cArray1Count: " << cArray1Count << "\n";
	cout << "cArray2Count: " << cArray2Count << "\n";


	cout << "\n---- cArray1 배열 출력 ----\n";

	for (int i = 0; i < cArray1Count; i++) {
		cout << "cArray1[" << i << "]: " << cArray1[i] <<"\n";
	}

	cout << "\n---- cArray2 배열 출력 ----\n";
	for (int i = 0; i < cArray2Count; i++) {
		cout << "cArray2[" << i << "]: " << cArray2[i] << "\n";
	}

	/*결과
	----배열 크기----
	sizeof(cArray1) : 6
	size(cArray2) : 6
	----원소 갯수----
	cArray1Count : 6
	cArray2Count : 6

	----cArray1 배열 출력----
	cArray1[0] : A
	cArray1[1] : B
	cArray1[2] : C
	cArray1[3] : D
	cArray1[4] : E
	cArray1[5] :

	----cArray2 배열 출력----
	cArray2[0] : A
	cArray2[1] : B
	cArray2[2] : C
	cArray2[3] : D
	cArray2[4] : E
	cArray2[5] :
	*/
}