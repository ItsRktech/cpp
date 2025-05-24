//example of passing object to function
#include <iostream>
using namespace std;

class complex
{
    private:
        int real, img;
    public:
        void input()
        {
            cout << "Enter real and imaginary parts of the complex number: ";
            cin >> real >> img;
        }
        void addComp(complex c1, complex c2)
        {
            real = c1.real + c2.real;
            img = c1.img + c2.img;
        }
        void display()
        {
            cout << "Sum of complex numbers: " << real << " + " << img << "i" << endl;
        }
};

int main()
{
    complex c3, c4, sum;
    c3.input();
    c4.input();
    sum.addComp(c3, c4);
    sum.display();
    return 0;
}