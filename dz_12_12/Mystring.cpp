#include "MyString.h"

MyString::MyString() {
    size = 80;
    str = new char[size + 1];
    for (int i = 0; i < size; i++) {
        str[i] = '*';
    }
    str[size] = '\0';
}

MyString::MyString(int custom_size) {
    size = custom_size;
    str = new char[size + 1];
    for (int i = 0; i < size; i++) {
        str[i] = '*';
    }
    str[size] = '\0';
}

MyString::MyString(bool initialize) {
    if (initialize) {
        cout << "input str: ";
        char input[100];
        cin.getline(input, 100);
        size = strlen(input);
        str = new char[size + 1];
        for (size_t i = 0; i < size; i++) {
            str[i] = input[i];
        }
        str[size] = '\0';
    }
}

MyString::MyString(const MyString& other) {
    size = other.size;
    str = new char[size + 1];
    for (int i = 0; i < size; i++) {
        str[i] = other.str[i];
    }
    str[size] = '\0';
}

MyString::~MyString() {
    delete[] str;
}

char* MyString::getStr() {
    return str;
}

void MyString::setStr(const char* my_str) {
    delete[] str;
    if (my_str != nullptr) {
        size = strlen(my_str);
        str = new char[size + 1];
        for (int i = 0; i < size; i++) {
            str[i] = my_str[i];
        }
        str[size] = '\0';
    }
}

int MyString::getSize() {
    return size;
}