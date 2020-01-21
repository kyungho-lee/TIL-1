#include <iostream>

using namespace std;

int main()
{
	while (true)
	{
		int i;
		cout << "수를 입력 : ";
		cin >> i;

		if (i < 1 || i > 100)
		{
			cout << "잘못 입력하셨습니다" << endl;
			continue;
		}

		int k;
		for (int j = 2; j < i; j++)
		{
			for (k = 2; k < j; k++)
			{
				if (j % k == 0)
				{
					break;
				}
			}

			if (j == k)
				cout << j << " ";
		}
		cout << endl;
	}
	

	/*for (int j = 2; j <= i; j++)
	{
		
		if (j == 2 || j == 3 || j == 5 || j == 7)
		{
			cout << j << " ";
			continue;
		}
		
		if (j % 2 == 0 || j % 3 == 0 || j % 5 == 0 || j % 7 == 0)
		{
			continue;
		}
		else
		{
			cout << j << " ";
		}
		
	}*/
}