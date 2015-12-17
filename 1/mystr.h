#ifndef MYSTR_H
#define MYSTR_H
#include <string>

namespace hw1
{
    class MyStr
    {
    private:
        size_t m_size;
        char * m_buf;

    public:

        MyStr();

        ~MyStr();

        MyStr(const MyStr &other);

        MyStr(const char * other);

        MyStr& operator = (const MyStr& other);

        MyStr& operator = (const char * other);
    };
}

#endif // MYSTR_H

