#include <iostream>
using namespace std;

void main() {
	char cArray1[] = "ABCDE";
	char cArray2[] = { 'A','B','C','D','E',0 };

	//�迭�� ũ��
	int cArray1Size = sizeof(cArray1);
	int cArray2Size = sizeof(cArray2);

	//���Ұ��� = �迭ũ�� / �迭�� 0��° ���� ũ��
	int cArray1Count = cArray1Size / sizeof(cArray1[0]);
	int cArray2Count = cArray2Size / sizeof(cArray2[0]);

	cout << "---- �迭 ũ�� ----\n";
	cout << "sizeof(cArray1): " << cArray1Size << "\n";
	cout << "size(cArray2): " << cArray2Size << "\n";

	cout << "---- ���� ���� ----\n";
	cout << "cArray1Count: " << cArray1Count << "\n";
	cout << "cArray2Count: " << cArray2Count << "\n";


	cout << "\n---- cArray1 �迭 ��� ----\n";

	for (int i = 0; i < cArray1Count; i++) {
		cout << "cArray1[" << i << "]: " << cArray1[i] <<"\n";
	}

	cout << "\n---- cArray2 �迭 ��� ----\n";
	for (int i = 0; i < cArray2Count; i++) {
		cout << "cArray2[" << i << "]: " << cArray2[i] << "\n";
	}

	/*���
	----�迭 ũ��----
	sizeof(cArray1) : 6
	size(cArray2) : 6
	----���� ����----
	cArray1Count : 6
	cArray2Count : 6

	----cArray1 �迭 ���----
	cArray1[0] : A
	cArray1[1] : B
	cArray1[2] : C
	cArray1[3] : D
	cArray1[4] : E
	cArray1[5] :

	----cArray2 �迭 ���----
	cArray2[0] : A
	cArray2[1] : B
	cArray2[2] : C
	cArray2[3] : D
	cArray2[4] : E
	cArray2[5] :
	*/
}