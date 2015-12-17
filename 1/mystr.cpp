#include "mystr.h"
#include <string.h>
namespace hw1{

    //default constructor needed for "MyStr a;"
    MyStr::MyStr()
        :m_buf(""),m_size(0)
    {
    }
    //copy constructor needed for "MyStr b = a"
    MyStr::MyStr(const MyStr & other)
        :m_size(other.m_size),m_buf(other.m_buf)
    {
    }

    //copy constructor needed for "MyStr b = a"
    MyStr::MyStr(const char * other)
    {
        *this = other;
    }

    MyStr & MyStr::operator=(const MyStr & other) //needed for MyStr a = "123";
    {
        this->m_size = other.m_size;
        this->m_buf = other.m_buf;
        return *this;
    }

    MyStr &MyStr::operator =(const char * other) //needed for  a = "123";
    {
        this->m_buf = strdup(other);
        this->m_size = strlen(other);

        return *this;
    }
    //destructor
    MyStr::~MyStr()
    {
        this->m_buf = nullptr;
        this->m_size = 0;
    }
}




