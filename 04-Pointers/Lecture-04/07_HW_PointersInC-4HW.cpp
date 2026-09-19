#include <iostream>
using namespace std;

void modifyString(char *str)
{
    while (*str)
    {
        if (*str >= 'a' && *str <= 'z')
        {
            *str = *str - 'a' + 'A';
        }
        str++;
    }
}

void concatenateAndPrint(char *str1, const char *str2)
{
    while (*str1)
    {
        str1++;
    }

    while ((*str1 = *str2))
    {
        str1++, str2++;
    }
}

void reverseString(char *str)
{
    char *end = str;
    while (*end)
    {
        end++;
    }
    end--;

    while (str < end)
    {
        char temp = *str;
        *str = *end;
        *end = temp;
        str++, end--;
    }
}

void updateValues(int *a, int *b)
{
    *a += *b;
    *b = abs(*a - 2 * (*b));
}

void countVowelsAndConsonants(const char *str, int &vowels, int &consonants)
{
    vowels = consonants = 0;

    while (*str)
    {
        char ch = tolower(*str);
        if (isalpha(ch))
        {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            {
                vowels++;
            }
            else
            {
                consonants++;
            }
        }
        str++;
    }
}

void foo(int *i, int *j)
{
    *i = *i + *j;
    *j = *i - *j;
    *i = *i - *j;
}

int main()
{

int main()
{

    // Q6.
        int a = 4, b = 5;
        foo(&a, &b);
        cout << a << " " << b;

    return 0;
}
