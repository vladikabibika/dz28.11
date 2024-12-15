#include <iostream>
using namespace std;

class MyString {
private:
    char* str;
    int size;

public:
    MyString();
    MyString(int custom_size);
    MyString(bool initialize);
    MyString(const MyString& other);
    ~MyString();

    char* getStr();
    void setStr(const char* my_str);
    int getSize();
};
