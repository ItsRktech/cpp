//add two distance in feet and inches 
#include <iostream>
using namespace std;
class Distance {
    private:
        int feet, inches;

    public:
        void input() {
            cout << "Enter distance in feet and inches: ";
            cin >> feet >> inches;
        }

        void addDistance(Distance d1, Distance d2) {
            inches = d1.inches + d2.inches;
            feet = d1.feet + d2.feet + inches / 12; // Convert inches to feet if more than 12
            inches %= 12; // Keep inches less than 12
        }

        void display() {
            cout << "Total distance: " << feet << " feet " << inches << " inches" << endl;
        }
};
int main() {
    Distance d1, d2, total;
    d1.input();
    d2.input();
    total.addDistance(d1, d2);
    total.display();
    return 0;
}