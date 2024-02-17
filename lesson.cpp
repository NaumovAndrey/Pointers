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
    std::cout << &i << std::endl; //����� ������

    int* pi = &i; // ��������� pi ������ �� i, ��� ����� ����������� & - ������ � int* - ���������
    std::cout << pi << std::endl; // ����� ������

    std::cout << *pi << std::endl; //�������� �������� �� ������

    *pi = 20; // �� ������ �������� �������� � ������� ������

    std::cout << i << " " << *pi << std::endl;

    int j = 5;


    pi = &j; //�������� ��������� �� ������ ������

    *pi = 25;
    std::cout << i << " " << j << std::endl;

    std::cout << sizeof(i) << " " << sizeof(int) << std::endl; //������ ����������

    int array[5] = { 1, 2, 3, 4, 5 };
    std::cout << array << " " << std::endl; //������ (�����) �� ������� ������
    std::cout << *array << " " << std::endl; //�������� � �������� 0

    int* pArr = array + 1;
    std::cout << *pArr << std::endl; // �������� �������� �� ������� �� ������� 1

    for (int i = 0; i < 5; ++i)
    {
        *(array + i) *= 2; //�������� ������ ������� ������� �� 2 � ������ � �������
        std::cout << *(array + i) << " " << std::endl;
    }

    const char* s = "s = hello world"; //������ �� ��� 
    char s1[] = "s1 = hello world"; //���� �����

    std::cout << s << " " << s1 << std::endl; //����� ������� ���������� � �� ������
    std::cout << s1[5] << std::endl; // ����� �������� ��� �������� 5
    std::cout << *(s1 + 5) << std::endl; //���� �����, ������ ����� ���������
    *(s1 + 5) = 'A'; //������ �������� ��� �������� 5
    std::cout << s1 << std::endl; // ����� �������

    int v = 0;
    while (*(s1 + v) != '\0') // '\0' - ����� ������
    {
        std::cout << *(s1 + v);
        ++v;
    }
    std::cout << std::endl;

    std::cout << "������ �������" << std::endl;
    bigA(s1);
}
