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

	cout << "A,B,C ���� ���� �Է� " << endl;
	for (int i = 0; i < 3; i++)
	{
		cin >> scoreKor[i];
	}
	cout << "A,B,C ���� ���� �Է� " << endl;
	for (int i = 0; i < 3; i++)
	{
		cin >> scoreEng[i];
	}
	cout << "A,B,C ���� ���� �Է� " << endl;
	for (int i = 0; i < 3; i++)
	{
		cin >> scoreMat[i];
	}
	cout << "A,B,C ���� ���� �Է� " << endl;
	for (int i = 0; i < 3; i++)
	{
		cin >> scoreSci[i];
	}

	for (int i = 0; i < 3; i++)
	{
		total[i] = scoreEng[i] + scoreKor[i] + scoreMat[i] + scoreSci[i];
		avr[i] = (float)total[i] / 4;
	}

	cout << "A�� ������ : " << total[0] << " ����� : " << avr[0] << endl;
	cout << "B�� ������ : " << total[1] << " ����� : " << avr[1] << endl;
	cout << "C�� ������ : " << total[2] << " ����� : " << avr[2] << endl;
}