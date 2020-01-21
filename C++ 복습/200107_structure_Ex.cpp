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
		cout << i + 1 << "번 학생의 성적 입력 : " << endl;
		cout << "국어 : ";
		cin >> student[i].kor_score;
		cout << "영어 : ";
		cin >> student[i].eng_score;
		cout << "수학 : ";
		cin >> student[i].math_score;
		cout << "과학 : ";
		cin >> student[i].sci_score;
	}

	for (int i = 0; i < 3; i++)
	{
		cout << i + 1 << "번 학생의 성적" << endl;
		cout << "총합 : " << student[i].TotalScore() << " ,평균 : " << student[i].AverageScore() << endl;
	}


}