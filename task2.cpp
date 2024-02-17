#include "iostream"

/**/

void revers(int* array)
{
	int temp;

	for (int i = 0; i < 5; i++)
	{
		temp = array[i];
		array[i] = array[9 - i];
		array[9 - i] = temp;
	}
}

void printConsoleArray(int* array, int size)
{
	for (int i = 0; i < size; i++)
	{
		std::cout << array[i] << " ";
	}
	std::cout << std::endl;
}

void task2()
{
	int array[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	int length = sizeof(array) / sizeof(array[0]);
	printConsoleArray(array, length);
	revers(array);
	printConsoleArray(array, length);
}
