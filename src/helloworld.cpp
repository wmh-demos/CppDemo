#include <iostream>
#include <vector>
#include <string>

#define day 7
using namespace std;

int main()
{
    cout << "const day = " << day << endl;
    cout << "sizeof(day) = " << sizeof(day) << endl;
    cout << "sizeof(int) = " << sizeof(int) << endl;
    cout << "sizeof(long) = " << sizeof(long) << endl;

    const int week = 52;
    cout << "const week = " << week << endl;

    int a = 10;
    cout << "a = " << a << endl;

    std::cout << "hello, world\n";
    return 0;
}