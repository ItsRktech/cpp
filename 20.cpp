//example of class and object
#include <iostream>
using namespace std;
class Student
{
    private:
        char name[20], fac[20];
        int id;
    public:
        void input()
        {
            cout << "Enter name: ";
            cin >> name;
            cout << "Enter faculty: ";
            cin >> fac;
            cout << "Enter id: ";
            cin >> id;
        }
        void display()
        {
            cout << "Name: " << name << endl;
            cout << "Faculty: " << fac << endl;
            cout << "ID: " << id << endl;
        }
};

int main()
{
    Student s;
    s.input();
    s.display();
    return 0;
}