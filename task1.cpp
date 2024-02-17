#include "iostream"

/**/

void change(int* i, int* j)
{
	int temp = *i;
	*i = *j;
	*j = temp;
}

void task1()
{
	int i = 10;
	int j = 20;

	std::cout << i << " " << j << std::endl;
	change(&i, &j);
	std::cout << i << " " << j << std::endl;
}
