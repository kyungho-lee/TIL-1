#include <iostream>

using namespace std;

//�ݺ����� ���
//Ư�� ������ Ư�� ������ �ݺ��ϴ� ���ȿ� �ݺ� ����

//������ ������ �ݺ���
//while���� ���� �ݺ�
//int main()
//{
//	/*while���� �⺻ ������ �ǹ�*/
//	//while (�ݺ�����)
//	//{
//	//	�ݺ�����
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

//1�� ����
//int main()
//{
//	while (1)
//	{
//		int i;
//		cout << "0 �Է½� ���α׷� ����" << endl;
//		cout << "���� �Է� �ϼ��� : ";
//		cin >> i;
//
//		if (i == 0)
//		{
//			cout << "���α׷� ����" << endl;
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
//				cout << i << "�� " << j + 1 << "������ �� : " << result << endl;
//				j++;
//			}
//
//			cout << "���� " << result << "�Դϴ�" << endl;
//		}
//	}
//}

//2��
//int main()
//{
//	int result = 0;
//	int  i = 1;
//	int  k = -1;
//	while (i <= 100)
//	{
//		result += k * (i * i);
//		cout << "������� " << result << endl;
//		k *= -1;
//		i++;
//	}
//
//	cout << "������ " << result << endl;
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
//	//cout << "������ " << result << endl;
//}