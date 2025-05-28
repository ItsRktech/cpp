//subtract two times
#include <iostream>
using namespace std;
class Time {
    private:
        int days, hours, minutes, seconds;

    public:
        void input() {
            cout << "Enter time in days, hours, minutes and seconds: ";
            cin >> days >> hours >> minutes >> seconds;
        }

        void subtractTime(Time t1, Time t2) {
            seconds = days * 86400 + hours * 3600 + minutes * 60 + seconds;
            int totalSeconds1 = t1.days * 86400 + t1.hours * 3600 + t1.minutes * 60 + t1.seconds;
            int totalSeconds2 = t2.days * 86400 + t2.hours * 3600 + t2.minutes * 60 + t2.seconds;
            int totalSeconds = totalSeconds2 - totalSeconds1;
            days = totalSeconds / 86400;
            totalSeconds %= 86400;
            hours = totalSeconds / 3600;
            totalSeconds %= 3600;
            minutes = totalSeconds / 60;
            seconds = totalSeconds % 60;
        }

        void display() {
            cout << "Total Time:"<< " " << days << " days, " 
                 << hours << " hours, " 
                 << minutes << " minutes, " 
                 << seconds << " seconds" << endl;
        }
};
int main() {
    Time t1, t2, total;
    t1.input();
    t2.input();
    total.subtractTime(t1, t2);
    total.display();
    cout << "Time difference calculated successfully." << endl;
    cout << "Thank you for using the time difference calculator!" << endl;
    return 0;
}