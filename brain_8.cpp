# include <iostream>
using namespace std;

struct SchoolReport
{
	int iNo;
	int iKor;
	int iEng;
	int iMath;
	float fAvg;
};

SchoolReport getSchoolReport(int iNo, int iKor, int iEng, int iMath) {
	SchoolReport sr;

	sr.iNo = iNo;
	sr.iKor = iKor;
	sr.iEng = iEng;
	sr.iMath = iMath;

	float fAvg = (iKor + iEng + iMath) / 3;
	sr.fAvg = fAvg;

	return sr;
}


void main() {
	//�Ŵ� �����ֱ�
	cout << "---- �Ŵ� -----\n";
	cout << "1. �л� ���� �߰�\n";
	cout << "2. ��ü ���� ����\n";
	cout << "Q. ���α׷� ����\n";
	cout << "-----------------\n";
	
	const int I_SIZE = 100;
	bool isTreu = true;
	char select;
	int iCount = 0;

	int iNo = 0, iKor = 0, iEng = 0, iMath = 0;


	SchoolReport sReport[I_SIZE];
	
	do {
		cout << "\n���Ͻô� �۾��� ��ȣ�� �Է��ϼ���: ";
		cin >> select;

		switch (select) {
		case '1'://�л� ���� �߰�
			cout << "\n�л� ���� �߰��� ���� �Ǿ����ϴ�.\n";
			
			cout << "�й��� �Է��� �ּ���: ";
			cin >> iNo;

			cout << "���� ������ �Է��� �ּ���: ";
			cin >> iKor;

			cout << "���� ������ �Է��� �ּ���: ";
			cin >> iEng;

			cout << "���� ������ �Է��� �ּ���: ";
			cin >> iMath;

			sReport[iCount] = getSchoolReport(iNo, iKor, iEng, iMath);
			iCount++;

			iNo = 0;
			iKor = 0;
			iEng = 0;
			iMath = 0;
			break;
		case '2':
			//��ü ���� ����
			cout << "\n��ü ���� ���Ⱑ ���� �Ǿ����ϴ�.\n";
			for (int i = 0; i < iCount; i++) {
				SchoolReport sr = sReport[i];
				cout << "No: " << sr.iNo << ", Kor: " << sr.iKor << ", Eng: " << sr.iEng << ", Math: " << sr.iMath << ", Average: " << sr.fAvg << "\n";
			}
			break;
		case 'Q':
		case 'q':
			isTreu = false;
			cout << "\n���α׷��� �����մϴ�.\n";
			break;
		default:
			cout << "\n�ùٸ� ���� �Է� ���ּ���\n";
			break;
		}
	} while (isTreu);

	
}