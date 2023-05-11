#include <iostream>
using namespace std;

class test
{
private:
    int health;

public:
    char *name;
    char level;

    test()
    {
        cout << "Simple Constructor called" << endl;
        name = new char[100];
    }

    test(int health)
    {
        cout << "This-> " << this << endl;
        this->health = health;
    }
    test(int health, char level)
    {
        this->level = level;
        this->health = health;
    }
    test(test &temp)
    {
        this->health = temp.health;
        this->level = temp.level;
    }
    void print()
    {
        cout << "Name " << this->name << endl;
        cout << "Health " << this->health << endl;
        cout << "Level" << this->level << endl;
    }
    int getHealth()
    {
        return health;
    }
    char getLevel()
    {
        return level;
    }
    void setHealth(int h)
    {
        health = h;
    }
    void setLevel(char ch)
    {
        level = ch;
    }

    void setName(char name[])
    {
        strcpy(this->name, name);
    }
};

int main()
{
    test x;
    x.setHealth(12);
    x.setLevel('D');
    char name[7] = "Babbar";
    x.setName(name);
    x.print();
    /*test h2(70, 'C');
    h2.print();
    test h3(h2);
    h3.print();
    test h1(10);

    cout << "Address of h1" << &h1 << endl;
    cout << "Size of h1 is: " << sizeof(h1) << endl;
    cout << "Health is " << h1.getHealth() << endl;
    h1.setHealth(70);
    h1.level = 'A';

    cout << "Health is:" << h1.getHealth() << endl;
    cout << "Level is: " << h1.level << endl;
    cout << "Size: " << sizeof(h1) << endl;
*/
    return 0;
}