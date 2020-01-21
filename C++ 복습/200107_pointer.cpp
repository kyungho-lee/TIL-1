#include <iostream>

using namespace std;

//x가 객체일 때 &x는 객체의 주소
//p가 객체의 주소일 때 *p는 객체 자체
//p가 x주소의 위체이 있으면
//p는 x를 가르키는 포인터가 된다

int main()
{
	//1번 예시
	/*int num = 10;
	int* pnum = &num;

	cout << num << ' ' << &num << endl;
	cout << *pnum << ' ' << pnum << endl;

	*pnum = 20;

	cout << num << ' ' << &num << endl;
	cout << *pnum << ' ' << pnum << endl;*/ //실행시 num, *pnum모두 수치 바뀜, 주소값은 유지

	
	//2번 예시
	//int num1 = 100, num2 = 100;
	//int* pnum;

	//pnum = &num1; //포인터 pnum 이 num1 의 주소를 가리킴
	//(*pnum) += 30; // num1 += 30과 동일

	//pnum = &num2; //포인터 pnum 이 num2 의 주소를 가리킴
	//*pnum -= 30; // num2 -= 30과 동일

	//cout << num1 << ' ' << num2 << endl;

	// 배열 포인터
	//int arr[5] = { 1,2,3,4,5 };
	//cout << *arr << endl;
	//cout << arr << endl;
	//cout << &arr[0] << endl;
	//cout << &arr << endl;


}