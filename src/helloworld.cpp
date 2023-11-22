#include <iostream>
#include <vector>
#include <string>

#define day 7

void testVariables();
void testInput();

using namespace std;

int main()
{
//    testVariables();
    testInput();
    string str = "hello C++!\n";
    std::cout << str;
    return 0;
}

void testInput() {
    int a = 0;
    cout << "please input int number: " << endl;
    cin >> a;
    cout << "u input: " << a << endl;
}

void testVariables() {
    cout << "const day = " << day << endl;
    cout << "sizeof(day) = " << sizeof(day) << endl;
    cout << "sizeof(int) = " << sizeof(int) << endl;
    cout << "sizeof(long) = " << sizeof(long) << endl;
    cout << "sizeof(float) = " << sizeof(float) << endl;
    cout << "sizeof(double) = " << sizeof(double) << endl;
    cout << "sizeof(bool) = " << sizeof(bool) << endl;

    bool flag = true;
    cout << "flag = " << flag << endl;

    char a = 'a';
    cout << "char a ASCII code = " << (int)a << endl;

    const int week = 52;
    cout << "const week = " << week << endl;

    int num1 = 10;
    cout << "num1 = " << num1 << endl;
}
