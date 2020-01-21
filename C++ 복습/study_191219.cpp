//숫자 야구
#include <iostream>
#include <string>
#include <time.h>

using namespace std;

int main()
{
	int nNum1, nNum2, nNum3;
	int nSplit1, nSplit2, nSplit3;
	int nNumber;
	int nStrike, nBall, nOut;

	srand(time(NULL));

	while (true)
	{
		nNum1 = rand() % 10;
		nNum2 = rand() % 10;
		nNum3 = rand() % 10;
		if (nNum1 == nNum2 || nNum1 == nNum3 || nNum2 == nNum3)
		{
			nNum1 = rand() % 10;
			nNum2 = rand() % 10;
			nNum3 = rand() % 10;
		}
		else
			break;
	}

	cout << nNum1 << nNum2 << nNum3 << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << "숫자를 말해주세요(3자리)";
		cin >> nNumber;

		if (nNumber > 999)
		{
			cout << "백의 자리로 다시 입력해주세요" << endl;
			i--;
			continue;
		}

		nSplit1 = nNumber / 100;
		nSplit2 = (nNumber - (nSplit1 * 100)) / 10;
		//nSplit3 = (nNumber - (nSplit1 * 100) - (nSplit2 * 10));
		nSplit3 = nNumber % 10;

		nStrike = nBall = nOut = 0;

		//스트라이크 세기
		if (nNum1 == nSplit1)
		{
			nStrike++;
		}
		if (nNum2 == nSplit2)
		{
			nStrike++;
		}
		if (nNum3 == nSplit3)
		{
			nStrike++;
		}

		//볼 세기
		if (nNum1 == nSplit2 || nNum1 == nSplit3)
		{
			nBall++;
		}
		if (nNum2 == nSplit1 || nNum2 == nSplit3)
		{
			nBall++;
		}
		if (nNum3 == nSplit1 || nNum3 == nSplit2)
		{
			nBall++;
		}


		if (nStrike == 0 && nBall == 0)
		{
			nOut++;
		}
		

		cout << "스트라이크 : " << nStrike << " 볼 : " << nBall << " 아웃 : " << nOut << endl;
		if (nStrike == 3)
		{
			cout << "성공!!" << endl;
			break;
		}
		//else
		//{
		//	//cmd창 날리기
		//	system("cls");
		//}
		cout << endl;
	}

}