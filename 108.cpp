#include <iostream>
using namespace std;

class Student
{

private:
    string name;
    int age;
    int height;

private:
    int getAge()
    {
        return this->age;
    }
};

int main()
{
    Student first;
    cout << "OK" << endl;

    return 0;
}