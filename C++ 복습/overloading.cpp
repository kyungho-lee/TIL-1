#include <iostream>

//void Swap(int i, int j); //포인터를 안쓰면 값을 바꾸지 못함
void Swap(int* i, int* j);
void Swap(char* c1, char* c2);
void Swap(double* d1, double* d2);

int main() {
	int num1 = 20, num2 = 30;
	/*Swap(num1, num2);
	std::cout << num1 << ' ' << num2 << std::endl;*/

	Swap(&num1, &num2);
	std::cout << num1 << ' ' << num2 << std::endl;

	char ch1 = 'A', ch2 = 'Z';
	Swap(&ch1, &ch2);
	std::cout << ch1 << ' ' << ch2 << std::endl;

	double dbl1 = 1.111, dbl2 = 5.555;
	Swap(&dbl1, &dbl2);
	std::cout << dbl1 << ' ' << dbl2 << std::endl;
	
}

//void Swap(int i, int j)
//{
//	int temp = i;
//	i = j;
//	j = temp;
//}

void Swap(int *i, int *j)
{
	int temp = *i;
	*i = *j;
	*j = temp;
}

void Swap(char* c1, char* c2)
{
	char temp = *c1;
	*c1 = *c2;
	*c2 = temp;
}

void Swap(double* d1, double* d2)
{
	double temp = *d1;
	*d1 = *d2;
	*d2 = temp;
}