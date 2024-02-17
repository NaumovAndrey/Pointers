#include "iostream"

/**/

bool substr(const char* s1, const char* s2)
{
    while (*s1 != '\0')
    {
        const char* temp_s1 = s1;
        const char* temp_s2 = s2;
        while (*temp_s1 == *temp_s2 && *temp_s2 != '\0')
        {
            temp_s1++;
            temp_s2++;
        }
        if (*temp_s2 == '\0')
        {
            return true;
        }
        s1++;
    }
    return false;
}

void task3()
{
	const char* a = "Hello world";
	const char* b = "wor";
	const char* c = "banana";
	std::cout << substr(a, b) << " " << substr(a, c);
}
