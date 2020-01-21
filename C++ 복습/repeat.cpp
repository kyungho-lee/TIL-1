#include <iostream>

using namespace std;

//반복문의 기능
//특정 영역을 특정 조건이 반복하는 동안에 반복 실행

//세가지 형태의 반복문
//while문에 의한 반복
//int main()
//{
//	/*while문의 기본 원리와 의미*/
//	//while (반복조건)
//	//{
//	//	반복내용
//	//}
//	int i = 0;
//
//	while (i < 10)
//	{
//		cout << i << "\n";
//		i++;
//	}
//
//}

//1번 문제
//int main()
//{
//	while (1)
//	{
//		int i;
//		cout << "0 입력시 프로그램 종료" << endl;
//		cout << "값을 입력 하세요 : ";
//		cin >> i;
//
//		if (i == 0)
//		{
//			cout << "프로그램 종료" << endl;
//			return 0;
//		}
//		else
//		{
//			int j = 0;
//
//			int result = 1;
//			while (j < 20)
//			{
//				result *= i;
//				cout << i << "의 " << j + 1 << "제곱의 값 : " << result << endl;
//				j++;
//			}
//
//			cout << "답은 " << result << "입니다" << endl;
//		}
//	}
//}

//2번
//int main()
//{
//	int result = 0;
//	int  i = 1;
//	int  k = -1;
//	while (i <= 100)
//	{
//		result += k * (i * i);
//		cout << "현재까지 " << result << endl;
//		k *= -1;
//		i++;
//	}
//
//	cout << "정답은 " << result << endl;
//}

int main()
{
	int i;
	cin >> i;
	int j = 0, add = 1;
	while (i > 0)
	{
		while (0 < i - j)
		{
			cout << "*";
			j++;
		}
		cout << endl;
		int temp = add;
		while (temp > 0)
		{
			cout << " ";
			temp--;
		}
		j = add;
		add++;
		i--;
	}
}

//int main()
//{
//	/*int result = 1;
//	for (int i = 1; i <= 20; i++)
//	{
//		result += result * 2;
//	}
//	cout << result << endl;*/
//
//	//int k = -1;
//	//int  result = 0;
//	//for (int i = 1; i <= 100; i++)
//	//{
//	//	result += k * (i * i);
//	//	k *= -1;
//	//}
//
//	//cout << "정답은 " << result << endl;
//}