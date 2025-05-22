//calculate simple interest using concept of class and object
#include <iostream>
using namespace std;

class SimpleInterest
{
    private:
        float p, r, t, si;
    public:
        void input()
        {
            cout << "Enter principal amount: ";
            cin >> p;
            cout << "Enter rate of interest: ";
            cin >> r;
            cout << "Enter time in years: ";
            cin >> t;
        }
        void calculate()
        {
            si = (p * r * t) / 100;
        }
        void display()
        {
            cout << "Simple Interest: " << si << endl;
        }
};

int main()
{
    SimpleInterest si;
    si.input();
    si.calculate();
    si.display();
    return 0;
}