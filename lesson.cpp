#include <iostream>

void bigA(char* s)
{
    int i = 0;
    while (*(s + i) != '\0')
    {
        if (*(s + i) == 'l')
        {
            *(s + i) = 'L';
        }
        std::cout << *(s + i);
        ++i;
    }
}

void lesson()
{
    setlocale(LC_ALL, "rus");
    int i = 10;
    std::cout << &i << std::endl; //адрес ссылки

    int* pi = &i; // присвоить pi ссылку на i, для этого указывается & - ссылка и int* - указатель
    std::cout << pi << std::endl; // адрес ссылки

    std::cout << *pi << std::endl; //получить значения по ссылке

    *pi = 20; // по ссылке изменили значение в области памяти

    std::cout << i << " " << *pi << std::endl;

    int j = 5;


    pi = &j; //поменяли указатель на другую ссылку

    *pi = 25;
    std::cout << i << " " << j << std::endl;

    std::cout << sizeof(i) << " " << sizeof(int) << std::endl; //размер переменной

    int array[5] = { 1, 2, 3, 4, 5 };
    std::cout << array << " " << std::endl; //ссырка (адрес) на область памяти
    std::cout << *array << " " << std::endl; //значение с индексом 0

    int* pArr = array + 1;
    std::cout << *pArr << std::endl; // получить значение из массива по индексу 1

    for (int i = 0; i < 5; ++i)
    {
        *(array + i) *= 2; //умножили каждый элемент массива на 2 и вывели в консоль
        std::cout << *(array + i) << " " << std::endl;
    }

    const char* s = "s = hello world"; //ссылка на тип 
    char s1[] = "s1 = hello world"; //тоже самое

    std::cout << s << " " << s1 << std::endl; //вывод зачения переменной а не ссылки
    std::cout << s1[5] << std::endl; // вывод значения под индексом 5
    std::cout << *(s1 + 5) << std::endl; //тоже самое, только через указатель
    *(s1 + 5) = 'A'; //замена элемента под индексом 5
    std::cout << s1 << std::endl; // вывод массива

    int v = 0;
    while (*(s1 + v) != '\0') // '\0' - конец строки
    {
        std::cout << *(s1 + v);
        ++v;
    }
    std::cout << std::endl;

    std::cout << "работа функции" << std::endl;
    bigA(s1);
}
