#ifndef STRING
#define STRING

#include <iostream>
using namespace std;

class String
{
private:
    int largo;
    char *str;

public:
    String();
    String(char *c);
    String(const String &s);
    ~String();
    String &operator=(const String &s);
    String operator+(const String &s);
    char &operator[](int pos);
    // friend ostream &operator<<(ostream &o, const String &s);
    // friend istream &operator>>(istream &i, String &s);
    int largoStr();
    String substring(int i1, int i2);
};

#endif