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
	//매뉴 보여주기
	cout << "---- 매뉴 -----\n";
	cout << "1. 학생 성적 추가\n";
	cout << "2. 전체 성적 보기\n";
	cout << "Q. 프로그램 종료\n";
	cout << "-----------------\n";
	
	const int I_SIZE = 100;
	bool isTreu = true;
	char select;
	int iCount = 0;

	int iNo = 0, iKor = 0, iEng = 0, iMath = 0;


	SchoolReport sReport[I_SIZE];
	
	do {
		cout << "\n원하시는 작업의 번호를 입력하세요: ";
		cin >> select;

		switch (select) {
		case '1'://학생 성적 추가
			cout << "\n학생 성적 추가가 선택 되었습니다.\n";
			
			cout << "학번을 입력해 주세요: ";
			cin >> iNo;

			cout << "국어 점수를 입력해 주세요: ";
			cin >> iKor;

			cout << "영어 점수를 입력해 주세요: ";
			cin >> iEng;

			cout << "수학 점수를 입력해 주세요: ";
			cin >> iMath;

			sReport[iCount] = getSchoolReport(iNo, iKor, iEng, iMath);
			iCount++;

			iNo = 0;
			iKor = 0;
			iEng = 0;
			iMath = 0;
			break;
		case '2':
			//전체 성적 보기
			cout << "\n전체 성적 보기가 선택 되었습니다.\n";
			for (int i = 0; i < iCount; i++) {
				SchoolReport sr = sReport[i];
				cout << "No: " << sr.iNo << ", Kor: " << sr.iKor << ", Eng: " << sr.iEng << ", Math: " << sr.iMath << ", Average: " << sr.fAvg << "\n";
			}
			break;
		case 'Q':
		case 'q':
			isTreu = false;
			cout << "\n프로그램을 종료합니다.\n";
			break;
		default:
			cout << "\n올바른 값을 입력 해주세요\n";
			break;
		}
	} while (isTreu);

	
}