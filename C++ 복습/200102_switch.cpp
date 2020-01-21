#include <iostream>
#define MAX 100

using namespace std;

enum CAL{PLUS = 1, MINUS, MUL, DIV};

int main()
{
	/*for (int i = 0; i < MAX; i++)
	{
		
	}*/


	/*int math;
	int nClass;

	cout << "수학점수 입력 : ";
	cin >> math;

	nClass = math / 10;

	switch (nClass)
	{
	case 0:
	case 1:
		cout << "넌 바보" << endl;
		break;
	default:
		cout << "넌 천재" << endl;
		break;
	}*/

	int num1, num2;

	cout << "숫자를 두개 입력하세요" << endl;
	cin >> num1 >> num2;
	/*cin >> num2;*/

	int calculate;
	cout << "어떤 계산을 할까요? 1:덧셈, 2:뺄셈, 3:곱셉, 4:나눗셈" << endl;
	cout << "입력 : ";
	cin >> calculate;
	
	int result = 0;
	switch (calculate)
	{
	case CAL::PLUS:
		result = num1 + num2;
		break;
	case CAL::MINUS:
		result = num1 - num2;
		break;
	case CAL::MUL:
		result = num1 * num2;
		break;
	case CAL::DIV:
		result = num1 / num2;
		break;
	default:
		cout << "입력오류" << endl;
		return 0;
	}

	cout << "결과는 " << result << " 입니다" << endl;

}