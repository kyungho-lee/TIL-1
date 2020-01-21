#include <iostream>

using namespace std;

struct MyStruct
{
	int my;
};

//구조체 예시
struct Hi : MyStruct
{
	int hello;
	int world;

	void Plus() { hello += 1; }
	void Minus() { world -= 1; }
};

int main()
{
	Hi hi;
	hi.hello = 1;
	hi.world = 1;
	hi.my = 1;

	cout << hi.hello << endl;
	cout << hi.world << endl;

	hi.Plus();
	hi.Minus();

	cout << hi.hello << endl;
	cout << hi.world << endl;
}