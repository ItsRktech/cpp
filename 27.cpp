//example of static member function
#include <iostream>
using namespace std;
class Test
{
    private:
        static int count;
        int a;
    public:
        void input()
        {
            cout << "Enter a number: ";
            cin >> a;
            count++;
        }
        static void displayCount()
        {
            cout << "Count: " << count << endl;
        }
};
int Test::count; // static data member definition
int main()
{
    Test t1, t2;
    t1.input();
    t2.input();
    Test::displayCount(); // static member function called using class name
    return 0;
}