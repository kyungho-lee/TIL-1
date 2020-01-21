#include <iostream>

using namespace std;

int main()
{
	int scoreKor[3];
	int scoreEng[3];
	int scoreMat[3];
	int scoreSci[3];
	int total[3];
	float avr[3];

	cout << "A,B,C 국어 점수 입력 " << endl;
	for (int i = 0; i < 3; i++)
	{
		cin >> scoreKor[i];
	}
	cout << "A,B,C 영어 점수 입력 " << endl;
	for (int i = 0; i < 3; i++)
	{
		cin >> scoreEng[i];
	}
	cout << "A,B,C 수학 점수 입력 " << endl;
	for (int i = 0; i < 3; i++)
	{
		cin >> scoreMat[i];
	}
	cout << "A,B,C 과학 점수 입력 " << endl;
	for (int i = 0; i < 3; i++)
	{
		cin >> scoreSci[i];
	}

	for (int i = 0; i < 3; i++)
	{
		total[i] = scoreEng[i] + scoreKor[i] + scoreMat[i] + scoreSci[i];
		avr[i] = (float)total[i] / 4;
	}

	cout << "A의 총점은 : " << total[0] << " 평균은 : " << avr[0] << endl;
	cout << "B의 총점은 : " << total[1] << " 평균은 : " << avr[1] << endl;
	cout << "C의 총점은 : " << total[2] << " 평균은 : " << avr[2] << endl;
}