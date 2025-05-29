//example of static data
#include <iostream>
using namespace std;
class Test{
    private:
        int a;
        static int count;
    public:
        void input() {
            cout << "Enter a number: ";
            cin >> a;
        }
        void display() {
            cout << "Value of a: " << a << endl;
            cout << "Count: " << count << endl;
        }
};
int Test::count;//static data member definition
int main()
{
    Test t1, t2;
    t1.input();
    t2.input();
    t1.display();
    t2.display();
    return 0;
}