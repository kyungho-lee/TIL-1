#include <iostream>

using namespace std;

struct Student {
	char name[30];

	int kor_score;
	int eng_score;
	int sci_score;
	int math_score;

	int TotalScore()
	{
		return kor_score + eng_score + math_score + sci_score;
	}

	float AverageScore()
	{
		return (float)TotalScore() / 4;
	}
};

int main()
{
	Student student[3];
	
	for (int i = 0; i < 3; i++)
	{
		cout << i + 1 << "�� �л��� ���� �Է� : " << endl;
		cout << "���� : ";
		cin >> student[i].kor_score;
		cout << "���� : ";
		cin >> student[i].eng_score;
		cout << "���� : ";
		cin >> student[i].math_score;
		cout << "���� : ";
		cin >> student[i].sci_score;
	}

	for (int i = 0; i < 3; i++)
	{
		cout << i + 1 << "�� �л��� ����" << endl;
		cout << "���� : " << student[i].TotalScore() << " ,��� : " << student[i].AverageScore() << endl;
	}


}