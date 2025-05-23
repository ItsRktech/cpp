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
            cout << "Enter principal amount, time and rate of interest: ";
            cin >> p >> t >> r;
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