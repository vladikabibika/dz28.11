#include "MyString.h"

int main() {
    MyString defaultStr;
    cout << "default str: " << defaultStr.getStr() << endl;
    cout << "size: " << defaultStr.getSize() << endl;

    MyString customSizeStr(10);
    cout << "custom size str: " << customSizeStr.getStr() << endl;
    cout << "size: " << customSizeStr.getSize() << endl;

    MyString initializedStr(true);
    cout << "initialized str: " << initializedStr.getStr() << endl;
    cout << "size: " << initializedStr.getSize() << endl;

    MyString copiedStr = initializedStr;
    cout << "copied str: " << copiedStr.getStr() << endl;
    cout << "size: " << copiedStr.getSize() << endl;

    return 0;
}