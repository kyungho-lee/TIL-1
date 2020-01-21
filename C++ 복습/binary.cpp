#include <iostream>
#include <bitset>

using namespace std;

int main() 
{
	int num1 = 0x43, num2 = 0xA7;
	int num3 = 032, num4 = 024;

	cout << "0x43의 10진수 정수의 값 : " << num1 << endl;
	cout << "0xA7의 10진수 정수의 값 : " << num2 << endl;
	cout << "032의 10진수 정수의 값 : " << num3 << endl;
	cout << "024의 10진수 정수의 값 : " << num4 << endl;

	int a = 256;
	int b = -257;

	unsigned char c = 10;
	unsigned char d = 0;
	unsigned char e = 7;

	cout << int(num1) << "\t" << bitset<8>(num1) << endl;
	cout << int(num2) << "\t" << bitset<8>(num2) << endl;
	cout << int(num3) << "\t" << bitset<8>(num3) << endl;
	cout << int(num4) << "\t" << bitset<8>(num4) << endl;

	cout << int(a) << "\t" << bitset<8>(a) << endl;
	cout << int(b) << "\t" << bitset<8>(b) << endl;
	cout << int(a+b) << "\t" << bitset<8>(a+b) << endl;
	cout << int(c) << "\t" << bitset<8>(c) << endl;
	cout << int(d) << "\t" << bitset<8>(d) << endl;
	cout << int(e) << "\t" << bitset<8>(e) << endl;

	int num5 = 15;
	int num6 = 20;
	int num7 = num5 & num6;
	int num8 = 1 << 2;

	cout << "AND 연산 결과 : " << num7 << endl;
	cout << num8 << endl;

	int i = 1;
	int j = 0;
	int k = i ^ j;
	cout << "XOR 연산 결과 : " << k << endl;

}