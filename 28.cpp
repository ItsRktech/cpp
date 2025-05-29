//example of constructor
#include <iostream>
using namespace std;
class Test
{
    private:
        int x,y;
    public:
        Test()//default constructor
        {
            x = 2;
            y = 10;
        }
    void display()
        {
            cout << "x: " << x << ", y: " << y << endl;
        }    
};
int main()
{
    Test t1; // default constructor called
    t1.display();
    return 0;
}