#include "String.h"
#include <iostream>
using namespace std;

String::String()
{
    str = new char[1];
    str[0] = '\0';
    largo = 0;
};

String::~String()
{
    delete[] str;
}

String::String(char *c)
{
    int i = 0;
    while (c[i] != '\0')
        i++;
    largo = i;

    str = new char[largo + 1];

    for (i = 0; i <= largo; i++)
        str[i] = c[i];
};

bool String::operator=(const String &s)
{
    bool flag = true;
    if (largo != s.largo)
        flag = false;
    else
        for (i = 0; i < largo && flag; i++)
            flag = s[i] == str[i];
    return flag;
}

String String::operator+(const String &s)
{
    String resu;
    resu.str = new char[largo + s.largo + 1];
    resu.largo = largo + s.largo;
    for (int i = 0; i < largo; i++)
        resu[i] = str[i];
    for (int i = 0; i <= s.largo; i++)
        resu[i + largo] = s.str[i];
    return resu;
}

char &String::operator[](int pos)
{
    if (pos < 0 || pos > largo)
        throw std::out_of_range;
    return str[pos];
}

String String::substring(int i, int f)
{
    if (i < 0 || i >= largo || f < 0 || f >= largo)
        throw std::out_of_range;
    else
    {
        String sub;
        sub.largo = f - i + 1;
        sub.str = new char[largo];
        for (int j = 0; j < largo; i++)
        {
            sub.str[i] = str[i + j];
        }
        sub.str[j] = '\0';

        return sub;
    }
}