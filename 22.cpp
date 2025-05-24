//find area of rectangle using concept of class and object
#include <iostream>
using namespace std;
class Rectangle
{
    private:
        float length, width, area;
    public:
        void input()
        {
            cout << "Enter length and width of the rectangle: ";
            cin >> length >> width;
        }
        void calculate()
        {
            area = length * width;
        }
        void display()
        {
            cout << "Area of the rectangle: " << area << endl;
        }
};
int main()
{
    Rectangle rect;
    rect.input();
    rect.calculate();
    rect.display();
    return 0;
}