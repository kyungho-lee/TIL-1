#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int A = 65;
	int Z = 90;

	for (int i = 1; i <= 26; i++)
	{
		for (A; A <= Z; A++)
		{
			cout << (char)A;
		}
		A = 65;
		Z--;
		cout << endl;
	}

	A = 65;
	Z = A + 1;
	for (int i = 1; i <= 25; i++)
	{
		for (A; A <= Z; A++)
		{
			cout << (char)A;
		}
		A = 65;
		Z++;
		cout << endl;
	}
	/*vector<int> alphaVec;

	for (int i = 65; i < 65+26; i++)
	{
		alphaVec.push_back(i);
	}
	int max = alphaVec.size();
	int max2 = max;
	for (int i = 0; i < max; i++)
	{
		for (int j = 0; j < max2; j++)
		{
			char c = alphaVec[j];
			cout << c;
		}
		max2--;
		cout << endl;
	}
	for (int i = 0; i < max; i++)
	{
		for (int j = 0; j <= max2; j++)
		{
			char c = alphaVec[j];
			cout << c;
		}
		max2++;
		cout << endl;
	}*/
}